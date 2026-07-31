#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSTEvent.h"

namespace RE
{
	class HUDTutorialTextEvent :
		public BSTValueEvent<BSFixedString>  // 00
	{
	public:
	};
	static_assert(sizeof(HUDTutorialTextEvent) == 0x10);
}
