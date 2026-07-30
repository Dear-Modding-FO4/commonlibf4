#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSBribeNPCEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSBribeNPCEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle actorRef;    // 00
		std::uint32_t   goldAmount;  // 04
	};
	static_assert(sizeof(BGSBribeNPCEvent) == 0x08);
}
