#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSPlayerGetsFavorEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSPlayerGetsFavorEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle actorRef;  // 00
	};
	static_assert(sizeof(BGSPlayerGetsFavorEvent) == 0x04);
}
