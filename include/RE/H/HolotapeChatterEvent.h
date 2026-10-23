#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSTEvent.h"
#include "RE/C/ContainerID.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class HolotapeChatterEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<HolotapeChatterEvent>* GetEventSource()
		{
			using func_t = decltype(&HolotapeChatterEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::HolotapeChatterEvent::GetEventSource };
			return func();
		}

		// members
		NiPointer<TESObjectREFR> npcRef;              // 00
		BSFixedString            chatter;             // 08
		float                    numericData;         // 10
		NiPointer<TESObjectREFR> holotapeRef;         // 18
		TESFormID                holotapeBaseFormID;  // 20
		ContainerID              holotapeUniqueID;    // 24
	};
	static_assert(sizeof(HolotapeChatterEvent) == 0x28);
}
