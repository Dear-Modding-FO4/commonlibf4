#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/G/GameMenuBase.h"
#include "REX/FModule.h"

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

		// override
		virtual void               Call(const Params&) override;         // 01
		virtual void               MapCodeObjectFunctions() override;    // 02
		virtual UI_MESSAGE_RESULTS ProcessMessage(UIMessage&) override;  // 03

		struct RuntimeData
		{
			MessageBoxData* currentMessage;  // 00
		};
		static_assert(sizeof(RuntimeData) == 0x8);

		[[nodiscard]] RuntimeData& GetRuntimeData(
			REX::FModule::Runtime a_runtime = REX::FModule::GetRuntimeIndex()) noexcept
		{
			return *reinterpret_cast<RuntimeData*>(
				reinterpret_cast<std::byte*>(this) + (a_runtime == REX::FModule::Runtime::kAE ? 0xF0 : 0xE8));
		}

		[[nodiscard]] const RuntimeData& GetRuntimeData(
			REX::FModule::Runtime a_runtime = REX::FModule::GetRuntimeIndex()) const noexcept
		{
			return *reinterpret_cast<const RuntimeData*>(
				reinterpret_cast<const std::byte*>(this) + (a_runtime == REX::FModule::Runtime::kAE ? 0xF0 : 0xE8));
		}

		void ShowMessage()
		{
			using func_t = decltype(&MessageBoxMenu::ShowMessage);
			static REL::Relocation<func_t> func{ ID::MessageBoxMenu::ShowMessage };
			return func(this);
		}

		// members
		// AE layout; use GetRuntimeData across runtimes.
		bool            canCancel;          // E8
		MessageBoxData* currentMessage;     // F0 (E8 on OG/NG)
		std::uint32_t   cancelButtonIndex;  // F8
	};
	static_assert(sizeof(MessageBoxMenu) == 0x100);
}
