#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class TESSleepStartEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESSleepStartEvent>* GetEventSource()
		{
			using func_t = decltype(&TESSleepStartEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESSleepStartEvent::GetEventSource };
			return func();
		}

		// members
		float                    startTime;       // 00
		float                    desiredEndTime;  // 04
		NiPointer<TESObjectREFR> bedRef;          // 08
	};
	static_assert(sizeof(TESSleepStartEvent) == 0x10);
}
