#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;

	class BGSFavorEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSFavorEvent::EventIndex };
			return *eventIdx;
		}

		// members
		BGSLocation*    location;            // 00
		ObjectRefHandle requestingActorRef;  // 08
	};
	static_assert(sizeof(BGSFavorEvent) == 0x10);
}
