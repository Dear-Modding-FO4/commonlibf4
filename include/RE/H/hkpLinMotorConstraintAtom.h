#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpConstraintMotor;

	class hkpLinMotorConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		bool m_isEnabled;                             // 0x02
		std::uint8_t m_motorAxis;                     // 0x03
		std::int16_t m_initializedOffset;             // 0x04
		std::int16_t m_previousTargetPositionOffset;  // 0x06
		float m_targetPosition;                       // 0x08
		std::uint8_t unk0C[0x4];                      // 0x0C
		hkpConstraintMotor* m_motor;                  // 0x10
	};
	static_assert(sizeof(hkpLinMotorConstraintAtom) == 0x18);
	static_assert(offsetof(hkpLinMotorConstraintAtom, m_isEnabled) == 0x2);
	static_assert(offsetof(hkpLinMotorConstraintAtom, m_motorAxis) == 0x3);
	static_assert(offsetof(hkpLinMotorConstraintAtom, m_initializedOffset) == 0x4);
	static_assert(offsetof(hkpLinMotorConstraintAtom, m_previousTargetPositionOffset) == 0x6);
	static_assert(offsetof(hkpLinMotorConstraintAtom, m_targetPosition) == 0x8);
	static_assert(offsetof(hkpLinMotorConstraintAtom, m_motor) == 0x10);
}
