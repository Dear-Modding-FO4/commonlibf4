#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class HUDCommandModeEvent :
		public BSTValueEvent<bool>  // 00
	{
	public:
	};
	static_assert(sizeof(HUDCommandModeEvent) == 0x02);
}
