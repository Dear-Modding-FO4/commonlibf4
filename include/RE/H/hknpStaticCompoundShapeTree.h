#pragma once

#include "RE/H/hkcdStaticTreeDefaultTreeStorage6.h"

namespace RE
{
	class hknpStaticCompoundShapeTree :
		public hkcdStaticTreeDefaultTreeStorage6  // 0x00
	{
	public:
	};
	static_assert(sizeof(hknpStaticCompoundShapeTree) == 0x30);
}
