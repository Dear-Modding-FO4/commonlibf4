#pragma once

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkContactPoint
	{
	public:

		// members
		hkVector4f m_position;          // 0x00
		hkVector4f m_separatingNormal;  // 0x10
	};
	static_assert(sizeof(hkContactPoint) == 0x20);
	static_assert(offsetof(hkContactPoint, m_position) == 0x0);
	static_assert(offsetof(hkContactPoint, m_separatingNormal) == 0x10);
}
