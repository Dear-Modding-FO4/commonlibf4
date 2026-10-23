#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/B/BSTSmartPointer.h"

namespace RE::REFREventCallbacks
{
	class IEventCallback;
}

namespace RE
{
	class TESObjectREFR;

	class TerminalMenuItemRunEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TerminalMenuItemRunEvent>* GetEventSource()
		{
			using func_t = decltype(&TerminalMenuItemRunEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TerminalMenuItemRunEvent::GetEventSource };
			return func();
		}

		// members
		BSTSmartPointer<REFREventCallbacks::IEventCallback> callback;        // 00
		TESObjectREFR*                                      targetRef;       // 08
		TESFormID                                           terminalFormID;  // 10
		std::uint16_t                                       menuItemID;      // 14
	};
	static_assert(sizeof(TerminalMenuItemRunEvent) == 0x18);
}
