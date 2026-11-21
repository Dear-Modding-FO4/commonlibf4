#pragma once

#include "RE/H/hkbGeneratorSyncInfoSyncPoint.h"

namespace RE
{
	class hkbGeneratorSyncInfoActiveInterval
	{
	public:

		// members
		hkbGeneratorSyncInfoSyncPoint m_syncPoints[2];  // 0x00
		float m_fraction;                               // 0x10
	};
	static_assert(sizeof(hkbGeneratorSyncInfoActiveInterval) == 0x14);
	static_assert(offsetof(hkbGeneratorSyncInfoActiveInterval, m_syncPoints) == 0x0);
	static_assert(offsetof(hkbGeneratorSyncInfoActiveInterval, m_fraction) == 0x10);
}
