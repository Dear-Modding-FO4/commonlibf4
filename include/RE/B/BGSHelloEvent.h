#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;

	class BGSHelloEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSHelloEvent::EventIndex };
			return *eventIdx;
		}

		// members
		BGSLocation*    location;    // 00
		ObjectRefHandle actorRef01;  // 08
		ObjectRefHandle actorRef02;  // 0C
	};
	static_assert(sizeof(BGSHelloEvent) == 0x10);
}
