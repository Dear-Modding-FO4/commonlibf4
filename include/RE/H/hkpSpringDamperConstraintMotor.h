#pragma once

#include "RE/H/hkpLimitedForceConstraintMotor.h"

namespace RE
{
	class __declspec(novtable) hkpSpringDamperConstraintMotor :
		public hkpLimitedForceConstraintMotor  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpSpringDamperConstraintMotor };
		inline static constexpr auto VTABLE{ VTABLE::hkpSpringDamperConstraintMotor };

		// members
		float m_springConstant;  // 0x20
		float m_springDamping;   // 0x24
	};
	static_assert(sizeof(hkpSpringDamperConstraintMotor) == 0x28);
	static_assert(offsetof(hkpSpringDamperConstraintMotor, m_springConstant) == 0x20);
	static_assert(offsetof(hkpSpringDamperConstraintMotor, m_springDamping) == 0x24);
}
