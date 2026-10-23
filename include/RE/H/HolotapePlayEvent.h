#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class HolotapePlayEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<HolotapePlayEvent>* GetEventSource()
		{
			using func_t = decltype(&HolotapePlayEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::HolotapePlayEvent::GetEventSource };
			return func();
		}

		// members
		NiPointer<TESObjectREFR> holotapeOriginRef;   // 00
		NiPointer<TESObjectREFR> tapeRef;             // 08
		TESFormID                holotapeBaseFormID;  // 10
		TESFormID                holotapeRefFormID;   // 14
	};
	static_assert(sizeof(HolotapePlayEvent) == 0x18);
}
