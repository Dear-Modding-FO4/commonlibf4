#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class TESPerkEntryRunEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESPerkEntryRunEvent>* GetEventSource()
		{
			using func_t = decltype(&TESPerkEntryRunEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESPerkEntryRunEvent::GetEventSource };
			return func();
		}

		// members
		NiPointer<TESObjectREFR> targetRef;     // 00
		NiPointer<TESObjectREFR> perkOwnerRef;  // 08
		TESFormID                perkFormID;    // 10
		std::uint16_t            perkEntryID;   // 14
	};
	static_assert(sizeof(TESPerkEntryRunEvent) == 0x18);
}
