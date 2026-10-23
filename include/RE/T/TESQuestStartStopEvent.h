#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class TESQuestStartStopEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESQuestStartStopEvent>* GetEventSource()
		{
			using func_t = decltype(&TESQuestStartStopEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESQuestStartStopEvent::GetEventSource };
			return func();
		}

		// members
		TESFormID questFormID;  // 00
		bool      started;      // 04
		bool      failed;       // 05
	};
	static_assert(sizeof(TESQuestStartStopEvent) == 0x08);
}
