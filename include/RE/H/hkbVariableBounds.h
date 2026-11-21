#pragma once

#include "RE/H/hkbVariableValue.h"

namespace RE
{
	class hkbVariableBounds
	{
	public:

		// members
		hkbVariableValue m_min;  // 0x00
		hkbVariableValue m_max;  // 0x04
	};
	static_assert(sizeof(hkbVariableBounds) == 0x8);
	static_assert(offsetof(hkbVariableBounds, m_min) == 0x0);
	static_assert(offsetof(hkbVariableBounds, m_max) == 0x4);
}
