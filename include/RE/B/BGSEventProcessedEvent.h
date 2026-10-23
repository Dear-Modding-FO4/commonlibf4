#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class BGSEventProcessedEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<BGSEventProcessedEvent>* GetEventSource()
		{
			using func_t = decltype(&BGSEventProcessedEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::BGSEventProcessedEvent::GetEventSource };
			return func();
		}

		// members
		std::uint32_t eventID;       // 00
		bool          startedQuest;  // 04
	};
	static_assert(sizeof(BGSEventProcessedEvent) == 0x08);
}
