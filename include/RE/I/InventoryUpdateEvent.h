#pragma once

#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSTEvent.h"

namespace RE
{
	class InventoryUpdateEvent :
		public BSTValueEvent<ObjectRefHandle>  // 00
	{
	public:
	};
	static_assert(sizeof(InventoryUpdateEvent) == 0x08);
}
