#pragma once

#include "RE/H/hkcdDynamicTreeCodecRawunsignedint.h"

namespace RE
{
	class hkcdDynamicTreeCodecRawUint :
		public hkcdDynamicTreeCodecRawunsignedint  // 0x00
	{
	public:
	};
	static_assert(sizeof(hkcdDynamicTreeCodecRawUint) == 0x30);
}
