#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class TESForm;

	class BGSNewVoicePowerEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSNewVoicePowerEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle actorRef;    // 00
		TESForm*        voicePower;  // 08
	};
	static_assert(sizeof(BGSNewVoicePowerEvent) == 0x10);
}
