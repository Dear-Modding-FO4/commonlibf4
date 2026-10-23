#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;

	class BGSArrestEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSArrestEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle guardRef;     // 00
		ObjectRefHandle criminalRef;  // 04
		BGSLocation*    location;     // 08
		std::int32_t    crimeType;    // 10
	};
	static_assert(sizeof(BGSArrestEvent) == 0x18);
}
