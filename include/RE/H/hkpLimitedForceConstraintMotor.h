#pragma once

#include "RE/H/hkpConstraintMotor.h"

namespace RE
{
	class __declspec(novtable) hkpLimitedForceConstraintMotor :
		public hkpConstraintMotor  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpLimitedForceConstraintMotor };
		inline static constexpr auto VTABLE{ VTABLE::hkpLimitedForceConstraintMotor };

		// members
		float m_minForce;  // 0x18
		float m_maxForce;  // 0x1C
	};
	static_assert(sizeof(hkpLimitedForceConstraintMotor) == 0x20);
	static_assert(offsetof(hkpLimitedForceConstraintMotor, m_minForce) == 0x18);
	static_assert(offsetof(hkpLimitedForceConstraintMotor, m_maxForce) == 0x1C);
}
