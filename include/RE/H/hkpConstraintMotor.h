#pragma once

#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkpConstraintMotor :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpConstraintMotor };
		inline static constexpr auto VTABLE{ VTABLE::hkpConstraintMotor };

		// add
		virtual hkpConstraintMotor* clone();  // 0x20 [04]

		enum class MotorType : std::int8_t
		{
			kTypeInvalid = 0,
			kTypePosition = 1,
			kTypeVelocity = 2,
			kTypeSpringDamper = 3,
			kTypeCallback = 4,
			kTypeMax = 5
		};

		// members
		hkEnum<MotorType, std::int8_t> m_type;  // 0x10
	};
	static_assert(sizeof(hkpConstraintMotor) == 0x18);
	static_assert(offsetof(hkpConstraintMotor, m_type) == 0x10);
}
