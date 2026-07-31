#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class VATSForcedEnemyHealthPercentEvent :
		public BSTValueEvent<float>  // 00
	{
	public:
	};
	static_assert(sizeof(VATSForcedEnemyHealthPercentEvent) == 0x08);
}
