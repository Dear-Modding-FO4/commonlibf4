#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class ShowingFeaturedItemVaultBoyEvent :
		public BSTValueEvent<bool>  // 00
	{
	public:
	};
	static_assert(sizeof(ShowingFeaturedItemVaultBoyEvent) == 0x02);
}
