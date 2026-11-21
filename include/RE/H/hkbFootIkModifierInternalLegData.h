#pragma once

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkbFootIkModifierInternalLegData
	{
	public:

		// members
		hkVector4f m_groundPosition;  // 0x00
		void* m_footIkSolver;         // 0x10
	};
	static_assert(sizeof(hkbFootIkModifierInternalLegData) == 0x20);
	static_assert(offsetof(hkbFootIkModifierInternalLegData, m_groundPosition) == 0x0);
	static_assert(offsetof(hkbFootIkModifierInternalLegData, m_footIkSolver) == 0x10);
}
