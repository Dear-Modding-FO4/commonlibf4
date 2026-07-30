#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;
	class TESForm;

	class BGSJailEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSJailEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle guardRef;    // 00
		TESForm*        crimeGroup;  // 08
		BGSLocation*    location;    // 10
		std::uint32_t   crimeGold;   // 18
	};
	static_assert(sizeof(BGSJailEvent) == 0x20);
}
