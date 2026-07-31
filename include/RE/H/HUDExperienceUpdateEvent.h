#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/X/XPChangeData.h"

namespace RE
{
	class HUDExperienceUpdateEvent :
		public BSTValueEvent<XPChangeData>  // 00
	{
	public:
	};
	static_assert(sizeof(HUDExperienceUpdateEvent) == 0x14);
}
