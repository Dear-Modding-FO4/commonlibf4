#pragma once

#include "RE/H/hkVector4.h"

namespace RE
{
	class hknpTyremarkPoint
	{
	public:

		// members
		hkVector4f m_pointLeft;   // 0x00
		hkVector4f m_pointRight;  // 0x10
	};
	static_assert(sizeof(hknpTyremarkPoint) == 0x20);
	static_assert(offsetof(hknpTyremarkPoint, m_pointLeft) == 0x0);
	static_assert(offsetof(hknpTyremarkPoint, m_pointRight) == 0x10);
}
