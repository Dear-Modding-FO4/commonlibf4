#pragma once

#include "RE/B/BSFixedString.h"

namespace RE
{
	class TESBoundObject;

	class HUDInventoryChangeMessageEvent
	{
	public:
		enum class ItemChangeType : std::int32_t
		{
			kAdded = 0,
			kRemoved = 1
		};

		// members
		TESBoundObject*            boundObject;      // 00
		BSFixedStringCS            fullDisplayName;  // 08
		std::uint32_t              count;            // 10
		REX::TEnum<ItemChangeType> changeType;       // 14
	};
	static_assert(sizeof(HUDInventoryChangeMessageEvent) == 0x18);
}
