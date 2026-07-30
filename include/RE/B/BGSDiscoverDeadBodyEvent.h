#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;

	class BGSDiscoverDeadBodyEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSDiscoverDeadBodyEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle actorRef;      // 00
		ObjectRefHandle deadActorRef;  // 04
		BGSLocation*    location;      // 08
	};
	static_assert(sizeof(BGSDiscoverDeadBodyEvent) == 0x10);
}
