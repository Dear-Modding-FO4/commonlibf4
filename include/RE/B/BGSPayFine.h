#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class TESForm;

	class BGSPayFine
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSPayFine::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle criminalRef;    // 00
		ObjectRefHandle guardRef;       // 04
		TESForm*        crimeGroup;     // 08
		std::uint32_t   crimeGoldPaid;  // 10
	};
	static_assert(sizeof(BGSPayFine) == 0x18);
}
