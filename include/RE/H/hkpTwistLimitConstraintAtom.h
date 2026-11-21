#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpTwistLimitConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t m_isEnabled;        // 0x02
		std::uint8_t m_twistAxis;        // 0x03
		std::uint8_t m_refAxis;          // 0x04
		std::uint8_t unk05[0x3];         // 0x05
		float m_minAngle;                // 0x08
		float m_maxAngle;                // 0x0C
		float m_angularLimitsTauFactor;  // 0x10
		std::uint8_t m_padding[12];      // 0x14
	};
	static_assert(sizeof(hkpTwistLimitConstraintAtom) == 0x20);
	static_assert(offsetof(hkpTwistLimitConstraintAtom, m_isEnabled) == 0x2);
	static_assert(offsetof(hkpTwistLimitConstraintAtom, m_twistAxis) == 0x3);
	static_assert(offsetof(hkpTwistLimitConstraintAtom, m_refAxis) == 0x4);
	static_assert(offsetof(hkpTwistLimitConstraintAtom, m_minAngle) == 0x8);
	static_assert(offsetof(hkpTwistLimitConstraintAtom, m_maxAngle) == 0xC);
	static_assert(offsetof(hkpTwistLimitConstraintAtom, m_angularLimitsTauFactor) == 0x10);
	static_assert(offsetof(hkpTwistLimitConstraintAtom, m_padding) == 0x14);
}
