#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class ShowingExperienceEvent :
		public BSTValueEvent<bool>  // 00
	{
	public:
	};
	static_assert(sizeof(ShowingExperienceEvent) == 0x02);
}
