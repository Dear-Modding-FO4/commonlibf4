#pragma once

#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSTEvent.h"

namespace RE
{
	class PlayerActivatePickRefEvent :
		public BSTValueEvent<ObjectRefHandle>  // 00
	{
	public:
	};
	static_assert(sizeof(PlayerActivatePickRefEvent) == 0x08);
}
