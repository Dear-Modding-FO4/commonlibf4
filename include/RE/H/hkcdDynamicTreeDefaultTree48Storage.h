#pragma once

#include "RE/H/hkcdDynamicTreeTree_DynamicStorage32.h"

namespace RE
{
	class hkcdDynamicTreeDefaultTree48Storage :
		public hkcdDynamicTreeTree_DynamicStorage32  // 0x00
	{
	public:
	};
	static_assert(sizeof(hkcdDynamicTreeDefaultTree48Storage) == 0x28);
}
