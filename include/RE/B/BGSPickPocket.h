#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSPickPocket
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSPickPocket::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle targetRef;  // 00
		std::uint32_t   success;    // 04
	};
	static_assert(sizeof(BGSPickPocket) == 0x08);
}
