#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpAngLimitConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t m_isEnabled;        // 0x02
		std::uint8_t m_limitAxis;        // 0x03
		float m_minAngle;                // 0x04
		float m_maxAngle;                // 0x08
		float m_angularLimitsTauFactor;  // 0x0C
	};
	static_assert(sizeof(hkpAngLimitConstraintAtom) == 0x10);
	static_assert(offsetof(hkpAngLimitConstraintAtom, m_isEnabled) == 0x2);
	static_assert(offsetof(hkpAngLimitConstraintAtom, m_limitAxis) == 0x3);
	static_assert(offsetof(hkpAngLimitConstraintAtom, m_minAngle) == 0x4);
	static_assert(offsetof(hkpAngLimitConstraintAtom, m_maxAngle) == 0x8);
	static_assert(offsetof(hkpAngLimitConstraintAtom, m_angularLimitsTauFactor) == 0xC);
}
