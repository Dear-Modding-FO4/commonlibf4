#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;

	class BGSAssualtActorEvent  // "assualt" (facepalm), sic per PDB
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSAssualtActorEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle victimRef;    // 00
		ObjectRefHandle attackerRef;  // 04
		BGSLocation*    location;     // 08
		bool            isCrime;      // 10
	};
	static_assert(sizeof(BGSAssualtActorEvent) == 0x18);
}
