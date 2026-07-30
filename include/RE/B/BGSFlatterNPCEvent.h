#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSFlatterNPCEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSFlatterNPCEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle actorRef;  // 00
	};
	static_assert(sizeof(BGSFlatterNPCEvent) == 0x04);
}
