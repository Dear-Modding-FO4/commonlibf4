#pragma once

#include "RE/H/hkpLimitedForceConstraintMotor.h"

namespace RE
{
	class __declspec(novtable) hkpPositionConstraintMotor :
		public hkpLimitedForceConstraintMotor  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpPositionConstraintMotor };
		inline static constexpr auto VTABLE{ VTABLE::hkpPositionConstraintMotor };

		// members
		float m_tau;                           // 0x20
		float m_damping;                       // 0x24
		float m_proportionalRecoveryVelocity;  // 0x28
		float m_constantRecoveryVelocity;      // 0x2C
	};
	static_assert(sizeof(hkpPositionConstraintMotor) == 0x30);
	static_assert(offsetof(hkpPositionConstraintMotor, m_tau) == 0x20);
	static_assert(offsetof(hkpPositionConstraintMotor, m_damping) == 0x24);
	static_assert(offsetof(hkpPositionConstraintMotor, m_proportionalRecoveryVelocity) == 0x28);
	static_assert(offsetof(hkpPositionConstraintMotor, m_constantRecoveryVelocity) == 0x2C);
}
