#pragma once

#include "RE/H/hkbEventBase.h"

namespace RE
{
	class hkbEventProperty :
		public hkbEventBase  // 0x00
	{
	public:
	};
	static_assert(sizeof(hkbEventProperty) == 0x10);
}
