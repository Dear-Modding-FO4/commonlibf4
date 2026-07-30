#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;

	class BGSOnActorAttachEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSOnActorAttachEvent::EventIndex };
			return *eventIdx;
		}

		// members
		BGSLocation*    location;  // 00
		ObjectRefHandle actorRef;  // 08
	};
	static_assert(sizeof(BGSOnActorAttachEvent) == 0x10);
}
