#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;
	enum class RELATIONSHIP_LEVEL : std::int32_t;

	class BGSKillActorEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSKillActorEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle                victimRef;                            // 00
		ObjectRefHandle                killerRef;                            // 04
		BGSLocation*                   location;                             // 08
		std::uint32_t                  crimeStatus;                          // 10
		REX::TEnum<RELATIONSHIP_LEVEL> relationshipRankToKillerBeforeDeath;  // 14
	};
	static_assert(sizeof(BGSKillActorEvent) == 0x18);
}
