#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;

	class BGSChangeLocationEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSChangeLocationEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle actorRef;     // 00
		BGSLocation*    oldLocation;  // 08
		BGSLocation*    newLocation;  // 10
	};
	static_assert(sizeof(BGSChangeLocationEvent) == 0x18);
}
