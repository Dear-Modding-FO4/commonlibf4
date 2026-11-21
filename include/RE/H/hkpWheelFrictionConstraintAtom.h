#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpWheelFrictionConstraintAtomAxle;

	class hkpWheelFrictionConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t m_isEnabled;                    // 0x02
		std::uint8_t m_forwardAxis;                  // 0x03
		std::uint8_t m_sideAxis;                     // 0x04
		std::uint8_t unk05[0x3];                     // 0x05
		float m_maxFrictionForce;                    // 0x08
		float m_torque;                              // 0x0C
		float m_radius;                              // 0x10
		float m_frictionImpulse[2];                  // 0x14
		float m_slipImpulse[2];                      // 0x1C
		std::uint8_t unk24[0x4];                     // 0x24
		hkpWheelFrictionConstraintAtomAxle* m_axle;  // 0x28
	};
	static_assert(sizeof(hkpWheelFrictionConstraintAtom) == 0x30);
	static_assert(offsetof(hkpWheelFrictionConstraintAtom, m_isEnabled) == 0x2);
	static_assert(offsetof(hkpWheelFrictionConstraintAtom, m_forwardAxis) == 0x3);
	static_assert(offsetof(hkpWheelFrictionConstraintAtom, m_sideAxis) == 0x4);
	static_assert(offsetof(hkpWheelFrictionConstraintAtom, m_maxFrictionForce) == 0x8);
	static_assert(offsetof(hkpWheelFrictionConstraintAtom, m_torque) == 0xC);
	static_assert(offsetof(hkpWheelFrictionConstraintAtom, m_radius) == 0x10);
	static_assert(offsetof(hkpWheelFrictionConstraintAtom, m_frictionImpulse) == 0x14);
	static_assert(offsetof(hkpWheelFrictionConstraintAtom, m_slipImpulse) == 0x1C);
	static_assert(offsetof(hkpWheelFrictionConstraintAtom, m_axle) == 0x28);
}
