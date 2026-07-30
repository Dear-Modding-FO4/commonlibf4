#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSTriggerMineExplosionEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSTriggerMineExplosionEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle victimRef;  // 00
		ObjectRefHandle mineRef;    // 04
	};
	static_assert(sizeof(BGSTriggerMineExplosionEvent) == 0x08);
}
