#pragma once

#include "RE/H/hkpLimitedForceConstraintMotor.h"

namespace RE
{
	class __declspec(novtable) hkpVelocityConstraintMotor :
		public hkpLimitedForceConstraintMotor  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpVelocityConstraintMotor };
		inline static constexpr auto VTABLE{ VTABLE::hkpVelocityConstraintMotor };

		// members
		float m_tau;                                    // 0x20
		float m_velocityTarget;                         // 0x24
		bool m_useVelocityTargetFromConstraintTargets;  // 0x28
	};
	static_assert(sizeof(hkpVelocityConstraintMotor) == 0x30);
	static_assert(offsetof(hkpVelocityConstraintMotor, m_tau) == 0x20);
	static_assert(offsetof(hkpVelocityConstraintMotor, m_velocityTarget) == 0x24);
	static_assert(offsetof(hkpVelocityConstraintMotor, m_useVelocityTargetFromConstraintTargets) == 0x28);
}
