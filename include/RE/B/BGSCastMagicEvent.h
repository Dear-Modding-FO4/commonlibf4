#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;

	class BGSCastMagicEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSCastMagicEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle castingActorRef;  // 00
		ObjectRefHandle spellTargetRef;   // 04
		BGSLocation*    location;         // 08
		std::uint32_t   crimeType;        // 10
	};
	static_assert(sizeof(BGSCastMagicEvent) == 0x18);
}
