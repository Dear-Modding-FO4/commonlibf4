#pragma once

#include "RE/H/hkcdStaticTreeDynamicStorage_Codec3Axis4.h"

namespace RE
{
	class hkcdStaticTreeDynamicStorage4 :
		public hkcdStaticTreeDynamicStorage_Codec3Axis4  // 0x00
	{
	public:
	};
	static_assert(sizeof(hkcdStaticTreeDynamicStorage4) == 0x10);
}
