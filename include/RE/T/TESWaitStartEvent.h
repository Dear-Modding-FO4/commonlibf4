#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class TESWaitStartEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESWaitStartEvent>* GetEventSource()
		{
			using func_t = decltype(&TESWaitStartEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESWaitStartEvent::GetEventSource };
			return func();
		}

		// members
		float startTime;       // 00
		float desiredEndTime;  // 04
	};
	static_assert(sizeof(TESWaitStartEvent) == 0x08);
}
