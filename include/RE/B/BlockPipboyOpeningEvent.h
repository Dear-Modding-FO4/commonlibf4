#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class BlockPipboyOpeningEvent :
		public BSTValueEvent<bool>  // 00
	{
	public:
	};
	static_assert(sizeof(BlockPipboyOpeningEvent) == 0x02);
}
