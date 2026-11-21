#pragma once

#include "RE/H/hkbEventProperty.h"

namespace RE
{
	class hkbSenseHandleModifierRange
	{
	public:

		// members
		hkbEventProperty m_event;  // 0x00
		float m_minDistance;       // 0x10
		float m_maxDistance;       // 0x14
		bool m_ignoreHandle;       // 0x18
	};
	static_assert(sizeof(hkbSenseHandleModifierRange) == 0x20);
	static_assert(offsetof(hkbSenseHandleModifierRange, m_event) == 0x0);
	static_assert(offsetof(hkbSenseHandleModifierRange, m_minDistance) == 0x10);
	static_assert(offsetof(hkbSenseHandleModifierRange, m_maxDistance) == 0x14);
	static_assert(offsetof(hkbSenseHandleModifierRange, m_ignoreHandle) == 0x18);
}
