#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;
	class TESForm;
	enum class REMOVE_TYPE : std::int32_t;

	class BGSRemoveFromPlayerEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSRemoveFromPlayerEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle         ownerRef;    // 00
		ObjectRefHandle         itemRef;     // 04
		BGSLocation*            location;    // 08
		TESForm*                baseItem;    // 10
		REX::TEnum<REMOVE_TYPE> removeType;  // 18
		std::uint32_t           itemValue;   // 1C
	};
	static_assert(sizeof(BGSRemoveFromPlayerEvent) == 0x20);
}
