#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;

	class BGSAttractionObject
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSAttractionObject::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle actorRef;   // 00
		ObjectRefHandle objectRef;  // 04
		BGSLocation*    location;   // 08
		std::uint32_t   commanded;  // 10
	};
	static_assert(sizeof(BGSAttractionObject) == 0x18);
}
