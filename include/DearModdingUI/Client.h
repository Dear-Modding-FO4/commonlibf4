#pragma once

// Include imgui.h and imgui_internal.h before this header.

#include <DearModdingUI/ImGuiFingerprint.h>

#if !defined(NOMINMAX)
#define NOMINMAX
#endif

#if !defined(WIN32_LEAN_AND_MEAN)
#define WIN32_LEAN_AND_MEAN
#endif

#include <Windows.h>

#include <atomic>
#include <concepts>
#include <cstddef>
#include <cstdint>
#include <deque>
#include <functional>
#include <new>
#include <optional>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>
#include <vector>

namespace dmui
{
	struct Version
	{
		uint16_t major{};
		uint16_t minor{};

		[[nodiscard]] constexpr uint32_t Pack() const noexcept
		{
			return DMUI_MAKE_VERSION(major, minor);
		}
	};

	// IMPORTANT: Client instances must outlive the game session because DMUI v1 cannot unregister callbacks.
	class Client
	{
	public:
		Client(std::string_view a_id, std::string_view a_displayName, Version a_version) :
			id_(a_id),
			displayName_(a_displayName),
			version_(a_version),
			fingerprint_(DMUI_MakeImGuiFingerprint())
		{}

		~Client() = default;

		Client(const Client&) = delete;
		Client(Client&&) = delete;
		Client& operator=(const Client&) = delete;
		Client& operator=(Client&&) = delete;

		[[nodiscard]] bool Connect() noexcept
		{
			if (clientHandle_ != DMUI_INVALID_CLIENT_HANDLE)
			{
				lastResult_ = DMUI_RESULT_OK;
				return true;
			}

			const auto getHostAPI = FindHostAPI();
			hostPresent_ = getHostAPI != nullptr;
			if (!getHostAPI)
			{
				api_ = nullptr;
				lastResult_ = DMUI_RESULT_OK;
				return false;
			}

			api_ = getHostAPI(DMUI_API_VERSION_CURRENT);
			if (!api_)
			{
				lastResult_ = DMUI_RESULT_UNSUPPORTED_ABI;
				return false;
			}
			if (api_->structSize < kRegisterClientSize || !api_->registerClient)
			{
				lastResult_ = DMUI_RESULT_STRUCT_TOO_SMALL;
				return false;
			}

			DMUI_ClientDescriptor descriptor{};
			descriptor.structSize = sizeof(descriptor);
			descriptor.apiVersion = DMUI_API_VERSION_CURRENT;
			descriptor.id = id_.c_str();
			descriptor.displayName = displayName_.c_str();
			descriptor.version = version_.Pack();
			descriptor.expectedImGui = &fingerprint_;
			descriptor.onHostReady = &OnHostReady;
			descriptor.onHostUnavailable = &OnHostUnavailable;
			descriptor.userData = this;
			descriptor.capabilities = DMUI_CLIENT_CAPABILITY_NONE;

			DMUI_ClientHandle handle{ DMUI_INVALID_CLIENT_HANDLE };
			lastResult_ = api_->registerClient(&descriptor, &handle);
			if (lastResult_ != DMUI_RESULT_OK)
				return false;

			clientHandle_ = handle;
			return true;
		}

		template <class Callable>
			requires std::invocable<std::decay_t<Callable>&>
		bool AddPage(
			const char* a_id,
			const char* a_displayName,
			const char* a_category,
			Callable&& a_draw,
			const char* a_summary = nullptr,
			int32_t a_sortKey = 0,
			DMUI_PageKind a_kind = DMUI_PAGE_KIND_SETTINGS) noexcept
		{
			if (!CanRegisterPage())
				return false;

			try
			{
				std::function<void()> callback{ std::forward<Callable>(a_draw) };
				if (!callback)
				return Fail(DMUI_RESULT_INVALID_ARGUMENT);

				pages_.push_back({ DMUI_INVALID_PAGE_HANDLE, std::move(callback) });
				auto& registration = pages_.back();

				DMUI_PageDescriptor descriptor{};
				descriptor.structSize = sizeof(descriptor);
				descriptor.id = a_id;
				descriptor.displayName = a_displayName;
				descriptor.category = a_category;
				descriptor.summary = a_summary;
				descriptor.sortKey = a_sortKey;
				descriptor.kind = a_kind;
				descriptor.draw = &Invoke;
				descriptor.userData = &registration.callback;

				DMUI_PageHandle handle{ DMUI_INVALID_PAGE_HANDLE };
				lastResult_ = api_->registerPage(clientHandle_, &descriptor, &handle);
				if (lastResult_ != DMUI_RESULT_OK)
				{
					pages_.pop_back();
					return false;
				}

				registration.handle = handle;
				return true;
			}
			catch (const std::bad_alloc&)
			{
				return Fail(DMUI_RESULT_RESOURCE_EXHAUSTED);
			}
			catch (...)
			{
				return Fail(DMUI_RESULT_CALLBACK_FAILED);
			}
		}

		template <class Callable>
			requires std::invocable<std::decay_t<Callable>&>
		bool AddAction(
			const char* a_id,
			const char* a_label,
			const char* a_iconName,
			const char* a_tooltip,
			Callable&& a_callback,
			int32_t a_sortKey = 0) noexcept
		{
			if (!IsConnected())
				return Fail(DMUI_RESULT_CLIENT_NOT_FOUND);
			if (api_->structSize < DMUI_HOST_API_REGISTER_ACTION_SIZE || !api_->registerAction)
				return Fail(DMUI_RESULT_UNSUPPORTED_ABI);

			try
			{
				std::function<void()> callback{ std::forward<Callable>(a_callback) };
				if (!callback)
					return Fail(DMUI_RESULT_INVALID_ARGUMENT);

				actions_.push_back({ DMUI_INVALID_ACTION_HANDLE, std::move(callback) });
				auto& registration = actions_.back();

				DMUI_ActionDescriptor descriptor{};
				descriptor.structSize = sizeof(descriptor);
				descriptor.id = a_id;
				descriptor.displayLabel = a_label;
				descriptor.iconName = a_iconName;
				descriptor.tooltip = a_tooltip;
				descriptor.sortKey = a_sortKey;
				descriptor.callback = &Invoke;
				descriptor.userData = &registration.callback;

				DMUI_ActionHandle handle{ DMUI_INVALID_ACTION_HANDLE };
				lastResult_ = api_->registerAction(clientHandle_, &descriptor, &handle);
				if (lastResult_ != DMUI_RESULT_OK)
				{
					actions_.pop_back();
					return false;
				}

				registration.handle = handle;
				return true;
			}
			catch (const std::bad_alloc&)
			{
				return Fail(DMUI_RESULT_RESOURCE_EXHAUSTED);
			}
			catch (...)
			{
				return Fail(DMUI_RESULT_CALLBACK_FAILED);
			}
		}

		bool SetStatus(DMUI_StatusSeverity a_severity, const char* a_message) noexcept
		{
			if (!IsConnected())
				return Fail(DMUI_RESULT_CLIENT_NOT_FOUND);
			if (api_->structSize < DMUI_HOST_API_SET_STATUS_SIZE || !api_->setStatus)
				return Fail(DMUI_RESULT_UNSUPPORTED_ABI);

			lastResult_ = api_->setStatus(clientHandle_, a_severity, a_message);
			return lastResult_ == DMUI_RESULT_OK;
		}

		[[nodiscard]] std::optional<bool> IsMenuVisible() noexcept
		{
			if (!api_)
			{
				Fail(DMUI_RESULT_HOST_NOT_INITIALIZED);
				return std::nullopt;
			}
			if (api_->structSize < kIsMenuVisibleSize || !api_->isMenuVisible)
			{
				Fail(DMUI_RESULT_STRUCT_TOO_SMALL);
				return std::nullopt;
			}

			uint32_t visible{};
			lastResult_ = api_->isMenuVisible(&visible);
			if (lastResult_ != DMUI_RESULT_OK)
				return std::nullopt;
			return visible != 0;
		}

		[[nodiscard]] std::optional<DMUI_HostStateInfo> QueryState() noexcept
		{
			if (!api_)
			{
				Fail(DMUI_RESULT_HOST_NOT_INITIALIZED);
				return std::nullopt;
			}
			if (api_->structSize < kQueryStateSize || !api_->queryState)
			{
				Fail(DMUI_RESULT_STRUCT_TOO_SMALL);
				return std::nullopt;
			}

			DMUI_HostStateInfo state{};
			state.structSize = sizeof(state);
			lastResult_ = api_->queryState(&state);
			if (lastResult_ != DMUI_RESULT_OK)
				return std::nullopt;
			return state;
		}

		[[nodiscard]] bool HostPresent() const noexcept
		{
			return hostPresent_;
		}

		[[nodiscard]] bool IsConnected() const noexcept
		{
			return clientHandle_ != DMUI_INVALID_CLIENT_HANDLE;
		}

		[[nodiscard]] DMUI_Result LastResult() const noexcept
		{
			return lastResult_.load(std::memory_order_relaxed);
		}

		[[nodiscard]] DMUI_UnavailableReason UnavailableReason() const noexcept
		{
			return unavailableReason_.load(std::memory_order_relaxed);
		}

	private:
		using GetHostAPIFn = const DMUI_HostAPI* (DMUI_CALL*)(uint32_t) noexcept;
		using EnumProcessModulesFn = BOOL(WINAPI*)(HANDLE, HMODULE*, DWORD, LPDWORD);

		struct PageRegistration
		{
			DMUI_PageHandle handle;
			std::function<void()> callback;
		};

		struct ActionRegistration
		{
			DMUI_ActionHandle handle;
			std::function<void()> callback;
		};

		static constexpr uint32_t kRegisterClientSize =
			static_cast<uint32_t>(offsetof(DMUI_HostAPI, registerClient) + sizeof(DMUI_RegisterClientFn));
		static constexpr uint32_t kRegisterPageSize =
			static_cast<uint32_t>(offsetof(DMUI_HostAPI, registerPage) + sizeof(DMUI_RegisterPageFn));
		static constexpr uint32_t kQueryStateSize =
			static_cast<uint32_t>(offsetof(DMUI_HostAPI, queryState) + sizeof(DMUI_QueryStateFn));
		static constexpr uint32_t kIsMenuVisibleSize =
			static_cast<uint32_t>(offsetof(DMUI_HostAPI, isMenuVisible) + sizeof(DMUI_IsMenuVisibleFn));

		[[nodiscard]] static GetHostAPIFn FindHostAPI() noexcept
		{
			const auto kernel32 = GetModuleHandleW(L"kernel32.dll");
			if (!kernel32)
				return nullptr;

			const auto enumerateModules = reinterpret_cast<EnumProcessModulesFn>(
				GetProcAddress(kernel32, "K32EnumProcessModules"));
			if (!enumerateModules)
				return nullptr;

			try
			{
				std::vector<HMODULE> modules(128);
				for (;;)
				{
					DWORD bytesNeeded{};
					const auto bytesAvailable = static_cast<DWORD>(modules.size() * sizeof(HMODULE));
					if (!enumerateModules(GetCurrentProcess(), modules.data(), bytesAvailable, &bytesNeeded))
						return nullptr;
					if (bytesNeeded > bytesAvailable)
					{
						modules.resize((bytesNeeded + sizeof(HMODULE) - 1) / sizeof(HMODULE));
						continue;
					}

					const auto moduleCount = bytesNeeded / sizeof(HMODULE);
					for (std::size_t index = 0; index < moduleCount; ++index)
					{
						const auto address = GetProcAddress(modules[index], "DMUI_GetHostAPI");
						if (address)
							return reinterpret_cast<GetHostAPIFn>(address);
					}
					return nullptr;
				}
			}
			catch (...)
			{
				return nullptr;
			}
		}

		[[nodiscard]] bool CanRegisterPage() noexcept
		{
			if (!IsConnected())
				return Fail(DMUI_RESULT_CLIENT_NOT_FOUND);
			if (api_->structSize < kRegisterPageSize || !api_->registerPage)
				return Fail(DMUI_RESULT_STRUCT_TOO_SMALL);
			return true;
		}

		bool Fail(DMUI_Result a_result) noexcept
		{
			lastResult_ = a_result;
			return false;
		}

		static void DMUI_CALL OnHostReady(const DMUI_HostReadyInfo* a_info, void*) noexcept
		{
			if (!a_info || a_info->structSize < sizeof(DMUI_HostReadyInfo))
				return;
			ImGui::SetCurrentContext(static_cast<ImGuiContext*>(a_info->imguiContext));
			ImGui::SetAllocatorFunctions(
				a_info->imguiAlloc,
				a_info->imguiFree,
				a_info->imguiAllocatorUserData);
		}

		static void DMUI_CALL OnHostUnavailable(
			DMUI_UnavailableReason a_reason,
			void* a_userData) noexcept
		{
			if (auto* const self = static_cast<Client*>(a_userData))
				self->unavailableReason_.store(a_reason, std::memory_order_relaxed);
		}

		static void DMUI_CALL Invoke(void* a_userData) noexcept
		{
			if (!a_userData)
				return;
			try
			{
				(*static_cast<std::function<void()>*>(a_userData))();
			}
			catch (...)
			{}
		}

		std::string id_;
		std::string displayName_;
		Version version_;
		DMUI_ImGuiFingerprint fingerprint_;
		const DMUI_HostAPI* api_{};
		DMUI_ClientHandle clientHandle_{ DMUI_INVALID_CLIENT_HANDLE };
		std::atomic<DMUI_Result> lastResult_{ DMUI_RESULT_OK };
		std::atomic<DMUI_UnavailableReason> unavailableReason_{ DMUI_UNAVAILABLE_NONE };
		bool hostPresent_{};
		std::deque<PageRegistration> pages_;
		std::deque<ActionRegistration> actions_;
	};
}
