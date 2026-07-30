#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSIntimidateNPCEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSIntimidateNPCEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle actorRef;  // 00
	};
	static_assert(sizeof(BGSIntimidateNPCEvent) == 0x04);
}
