#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSKeyword;
	class BGSLocation;

	class BGSScriptEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSScriptEvent::EventIndex };
			return *eventIdx;
		}

		// members
		BGSKeyword*     keyword;   // 00
		BGSLocation*    location;  // 08
		ObjectRefHandle ref01;     // 10
		ObjectRefHandle ref02;     // 14
		std::uint32_t   value01;   // 18
		std::uint32_t   value02;   // 1C
	};
	static_assert(sizeof(BGSScriptEvent) == 0x20);
}
