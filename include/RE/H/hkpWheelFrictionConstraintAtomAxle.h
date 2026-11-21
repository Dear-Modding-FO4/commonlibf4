#pragma once

namespace RE
{
	class hkpWheelFrictionConstraintAtomAxle
	{
	public:

		// members
		float m_spinVelocity;              // 0x00
		float m_sumVelocity;               // 0x04
		std::int32_t m_numWheels;          // 0x08
		std::int32_t m_wheelsSolved;       // 0x0C
		std::int32_t m_stepsSolved;        // 0x10
		float m_invInertia;                // 0x14
		float m_inertia;                   // 0x18
		float m_impulseScaling;            // 0x1C
		float m_impulseMax;                // 0x20
		bool m_isFixed;                    // 0x24
		std::uint8_t unk25[0x3];           // 0x25
		std::int32_t m_numWheelsOnGround;  // 0x28
	};
	static_assert(sizeof(hkpWheelFrictionConstraintAtomAxle) == 0x2C);
	static_assert(offsetof(hkpWheelFrictionConstraintAtomAxle, m_spinVelocity) == 0x0);
	static_assert(offsetof(hkpWheelFrictionConstraintAtomAxle, m_sumVelocity) == 0x4);
	static_assert(offsetof(hkpWheelFrictionConstraintAtomAxle, m_numWheels) == 0x8);
	static_assert(offsetof(hkpWheelFrictionConstraintAtomAxle, m_wheelsSolved) == 0xC);
	static_assert(offsetof(hkpWheelFrictionConstraintAtomAxle, m_stepsSolved) == 0x10);
	static_assert(offsetof(hkpWheelFrictionConstraintAtomAxle, m_invInertia) == 0x14);
	static_assert(offsetof(hkpWheelFrictionConstraintAtomAxle, m_inertia) == 0x18);
	static_assert(offsetof(hkpWheelFrictionConstraintAtomAxle, m_impulseScaling) == 0x1C);
	static_assert(offsetof(hkpWheelFrictionConstraintAtomAxle, m_impulseMax) == 0x20);
	static_assert(offsetof(hkpWheelFrictionConstraintAtomAxle, m_isFixed) == 0x24);
	static_assert(offsetof(hkpWheelFrictionConstraintAtomAxle, m_numWheelsOnGround) == 0x28);
}
