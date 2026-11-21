#pragma once

#include "RE/H/hkcdStaticTreeDynamicStorage_Codec3Axis6.h"

namespace RE
{
	class hkcdStaticTreeDynamicStorage6 :
		public hkcdStaticTreeDynamicStorage_Codec3Axis6  // 0x00
	{
	public:
	};
	static_assert(sizeof(hkcdStaticTreeDynamicStorage6) == 0x10);
}
