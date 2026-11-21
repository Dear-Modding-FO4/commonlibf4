#pragma once

#include "RE/H/hkcdDynamicTreeDefaultDynamicStorage_RawUint.h"

namespace RE
{
	class hkcdDynamicTreeDynamicStorage32 :
		public hkcdDynamicTreeDefaultDynamicStorage_RawUint  // 0x00
	{
	public:
	};
	static_assert(sizeof(hkcdDynamicTreeDynamicStorage32) == 0x18);
}
