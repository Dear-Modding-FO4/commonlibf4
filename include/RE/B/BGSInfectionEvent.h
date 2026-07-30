#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class TESForm;

	class BGSInfectionEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSInfectionEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle transmittingActorRef;  // 00
		TESForm*        infection;             // 08
	};
	static_assert(sizeof(BGSInfectionEvent) == 0x10);
}
