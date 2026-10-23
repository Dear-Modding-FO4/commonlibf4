#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;

	class BGSTrespassEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSTrespassEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle victimRef;      // 00
		ObjectRefHandle trespasserRef;  // 04
		BGSLocation*    location;       // 08
		bool            isCrime;        // 10
	};
	static_assert(sizeof(BGSTrespassEvent) == 0x18);
}
