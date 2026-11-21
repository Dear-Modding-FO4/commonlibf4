#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpConstraintMotor;

	class hkpAngMotorConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		bool m_isEnabled;                                        // 0x02
		std::uint8_t m_motorAxis;                                // 0x03
		std::int16_t m_initializedOffset;                        // 0x04
		std::int16_t m_previousTargetAngleOffset;                // 0x06
		std::int16_t m_correspondingAngLimitSolverResultOffset;  // 0x08
		std::uint8_t unk0A[0x2];                                 // 0x0A
		float m_targetAngle;                                     // 0x0C
		hkpConstraintMotor* m_motor;                             // 0x10
		std::uint8_t m_padding[12];                              // 0x18
	};
	static_assert(sizeof(hkpAngMotorConstraintAtom) == 0x28);
	static_assert(offsetof(hkpAngMotorConstraintAtom, m_isEnabled) == 0x2);
	static_assert(offsetof(hkpAngMotorConstraintAtom, m_motorAxis) == 0x3);
	static_assert(offsetof(hkpAngMotorConstraintAtom, m_initializedOffset) == 0x4);
	static_assert(offsetof(hkpAngMotorConstraintAtom, m_previousTargetAngleOffset) == 0x6);
	static_assert(offsetof(hkpAngMotorConstraintAtom, m_correspondingAngLimitSolverResultOffset) == 0x8);
	static_assert(offsetof(hkpAngMotorConstraintAtom, m_targetAngle) == 0xC);
	static_assert(offsetof(hkpAngMotorConstraintAtom, m_motor) == 0x10);
	static_assert(offsetof(hkpAngMotorConstraintAtom, m_padding) == 0x18);
}
