#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class TESObjectWEAP;

	class BGSIronSights
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSIronSights::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle actorRef;  // 00
		TESObjectWEAP*  weapon;    // 08
	};
	static_assert(sizeof(BGSIronSights) == 0x10);
}
