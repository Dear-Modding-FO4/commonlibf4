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

		// override
		virtual void               Call(const Params&) override;         // 01
		virtual void               MapCodeObjectFunctions() override;    // 02
		virtual UI_MESSAGE_RESULTS ProcessMessage(UIMessage&) override;  // 03

		// currentMessage is at E8 on OG/NG and F0 on AE
		[[nodiscard]] MessageBoxData*& GetCurrentMessage() noexcept
		{
			return REL::RelocateMember<MessageBoxData*>(this, REL::Offset{ 0xE8, 0xE8, 0xF0 });
		}

		[[nodiscard]] MessageBoxData* const& GetCurrentMessage() const noexcept
		{
			return REL::RelocateMember<MessageBoxData*>(this, REL::Offset{ 0xE8, 0xE8, 0xF0 });
		}

		void ShowMessage()
		{
			using func_t = decltype(&MessageBoxMenu::ShowMessage);
			static REL::Relocation<func_t> func{ ID::MessageBoxMenu::ShowMessage };
			return func(this);
		}

		// members
		// AE layout; use GetCurrentMessage across runtimes.
		// canCancel and cancelButtonIndex exist on AE only; do not read them on OG/NG.
		// sizeof is the AE size (OG/NG is 0xF0).
		bool            canCancel;          // E8
		MessageBoxData* currentMessage;     // F0 (E8 on OG/NG)
		std::uint32_t   cancelButtonIndex;  // F8
	};
	static_assert(sizeof(MessageBoxMenu) == 0x100);
}
