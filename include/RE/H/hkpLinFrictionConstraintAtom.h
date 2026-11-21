#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpLinFrictionConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t m_isEnabled;     // 0x02
		std::uint8_t m_frictionAxis;  // 0x03
		float m_maxFrictionForce;     // 0x04
		std::uint8_t m_padding[8];    // 0x08
	};
	static_assert(sizeof(hkpLinFrictionConstraintAtom) == 0x10);
	static_assert(offsetof(hkpLinFrictionConstraintAtom, m_isEnabled) == 0x2);
	static_assert(offsetof(hkpLinFrictionConstraintAtom, m_frictionAxis) == 0x3);
	static_assert(offsetof(hkpLinFrictionConstraintAtom, m_maxFrictionForce) == 0x4);
	static_assert(offsetof(hkpLinFrictionConstraintAtom, m_padding) == 0x8);
}
