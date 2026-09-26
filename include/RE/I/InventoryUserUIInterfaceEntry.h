#pragma once

#include "RE/B/BSTArray.h"
#include "RE/I/InventoryInterface.h"

namespace RE
{
	class InventoryUserUIInterfaceEntry
	{
	public:
		// members
		InventoryInterface::Handle     invHandle;   // 00
		BSTSmallArray<std::uint16_t, 4> stackIndex;  // 08
	};
	static_assert(sizeof(InventoryUserUIInterfaceEntry) == 0x20);
}
