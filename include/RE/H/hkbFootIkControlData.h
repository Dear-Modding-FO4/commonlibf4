#pragma once

#include "RE/H/hkbFootIkGains.h"

namespace RE
{
	class hkbFootIkControlData
	{
	public:

		// members
		hkbFootIkGains m_gains;  // 0x00
		float m_enabled[8];      // 0x30
	};
	static_assert(sizeof(hkbFootIkControlData) == 0x50);
	static_assert(offsetof(hkbFootIkControlData, m_gains) == 0x0);
	static_assert(offsetof(hkbFootIkControlData, m_enabled) == 0x30);
}
