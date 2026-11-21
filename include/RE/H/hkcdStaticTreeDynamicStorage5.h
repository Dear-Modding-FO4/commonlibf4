#pragma once

#include "RE/H/hkcdStaticTreeDynamicStorage_Codec3Axis5.h"

namespace RE
{
	class hkcdStaticTreeDynamicStorage5 :
		public hkcdStaticTreeDynamicStorage_Codec3Axis5  // 0x00
	{
	public:
	};
	static_assert(sizeof(hkcdStaticTreeDynamicStorage5) == 0x10);
}
