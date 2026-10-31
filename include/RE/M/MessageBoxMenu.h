#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/G/GameMenuBase.h"
#include "RE/R/RelocateMember.h"

namespace RE
{
	class MenuModeChangeEvent;
	class MessageBoxData;

	class __declspec(novtable) MessageBoxMenu :
	    public GameMenuBase,                      // 00
	    public BSTEventSink<MenuModeChangeEvent>  // E0
	{
	public:
		static constexpr auto RTTI{ RTTI::MessageBoxMenu };
		static constexpr auto VTABLE{ VTABLE::MessageBoxMenu };
		static constexpr auto MENU_NAME{ "MessageBoxMenu"sv };

		struct RuntimeData
		{
			MessageBoxData* currentMessage;  // 00
		};
		static_assert(sizeof(RuntimeData) == 0x8);

		struct AERuntimeData
		{
			bool            canCancel;          // 00
			MessageBoxData* currentMessage;     // 08
			std::uint32_t   cancelButtonIndex;  // 10
		};
		static_assert(offsetof(AERuntimeData, currentMessage) == 0x8);
		static_assert(offsetof(AERuntimeData, cancelButtonIndex) == 0x10);
		static_assert(sizeof(AERuntimeData) == 0x18);

		// override
		virtual void               Call(const Params&) override;         // 01
		virtual void               MapCodeObjectFunctions() override;    // 02
		virtual UI_MESSAGE_RESULTS ProcessMessage(UIMessage&) override;  // 03

		// sizeof reserves AE storage; OG/NG native instances are smaller.
		[[nodiscard]] static constexpr std::size_t GetRuntimeSize(
			REX::FModule::Runtime a_runtime = REX::FModule::GetRuntimeIndex()) noexcept
		{
			return a_runtime == REX::FModule::Runtime::kAE ? 0x100 : 0xF0;
		}

		[[nodiscard]] RuntimeData& GetRuntimeData() noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0xE8, 0xE8, 0xF0 });
		}

		[[nodiscard]] const RuntimeData& GetRuntimeData() const noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0xE8, 0xE8, 0xF0 });
		}

		// AE-only cancellation fields; null on OG/NG.
		[[nodiscard]] AERuntimeData* GetAERuntimeData() noexcept
		{
			return REX::FModule::IsRuntimeAE() ?
			           std::addressof(REL::RelocateMember<AERuntimeData>(this, REL::Offset{ 0xE8, 0xE8, 0xE8 })) :
			           nullptr;
		}

		[[nodiscard]] const AERuntimeData* GetAERuntimeData() const noexcept
		{
			return REX::FModule::IsRuntimeAE() ?
			           std::addressof(REL::RelocateMember<AERuntimeData>(this, REL::Offset{ 0xE8, 0xE8, 0xE8 })) :
			           nullptr;
		}

		[[nodiscard]] MessageBoxData*& GetCurrentMessage() noexcept
		{
			return GetRuntimeData().currentMessage;
		}

		[[nodiscard]] MessageBoxData* const& GetCurrentMessage() const noexcept
		{
			return GetRuntimeData().currentMessage;
		}

		void ShowMessage()
		{
			using func_t = decltype(&MessageBoxMenu::ShowMessage);
			static REL::Relocation<func_t> func{ ID::MessageBoxMenu::ShowMessage };
			return func(this);
		}

	private:
		// Maximum native storage; access the tail through the runtime views.
		std::byte _runtimeData[0x18];  // E8
	};
	static_assert(sizeof(MessageBoxMenu) == 0x100);
}
