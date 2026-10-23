#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class BGSLocation;
	class TESForm;
	enum class ACQUIRE_TYPE : std::int32_t;

	class BGSAddToPlayerInventoryEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSAddToPlayerInventoryEvent::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle          ownerRef;      // 00
		ObjectRefHandle          containerRef;  // 04
		BGSLocation*             location;      // 08
		TESForm*                 baseItem;      // 10
		REX::TEnum<ACQUIRE_TYPE> acquireType;   // 18
		std::uint32_t            itemCount;     // 1C
	};
	static_assert(sizeof(BGSAddToPlayerInventoryEvent) == 0x20);
}
