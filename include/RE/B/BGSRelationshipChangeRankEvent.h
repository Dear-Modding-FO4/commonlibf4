#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	enum class RELATIONSHIP_LEVEL : std::int32_t;

	class BGSRelationshipChangeRankEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSRelationshipChangeRankEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle                actorRef01;  // 00
		ObjectRefHandle                actorRef02;  // 04
		REX::TEnum<RELATIONSHIP_LEVEL> oldRank;     // 08
		REX::TEnum<RELATIONSHIP_LEVEL> newRank;     // 0C
	};
	static_assert(sizeof(BGSRelationshipChangeRankEvent) == 0x10);
}
