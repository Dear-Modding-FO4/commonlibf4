#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class TESForm;

	class BGSCrimeGoldEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSCrimeGoldEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle victimRef;    // 00
		ObjectRefHandle criminalRef;  // 04
		TESForm*        faction;      // 08
		std::uint32_t   goldAmount;   // 10
		std::int32_t    crimeType;    // 14
	};
	static_assert(sizeof(BGSCrimeGoldEvent) == 0x18);
}
