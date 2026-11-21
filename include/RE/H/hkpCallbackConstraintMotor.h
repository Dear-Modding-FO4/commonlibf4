#pragma once

#include "RE/H/hkEnum.h"
#include "RE/H/hkpLimitedForceConstraintMotor.h"

namespace RE
{
	class __declspec(novtable) hkpCallbackConstraintMotor :
		public hkpLimitedForceConstraintMotor  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpCallbackConstraintMotor };
		inline static constexpr auto VTABLE{ VTABLE::hkpCallbackConstraintMotor };

		enum class CallbackType : std::uint32_t
		{
			kCallbackMotorTypeHavokDemoSpringDamper = 0,
			kCallbackMotorTypeUser0 = 1,
			kCallbackMotorTypeUser1 = 2,
			kCallbackMotorTypeUser2 = 3,
			kCallbackMotorTypeUser3 = 4
		};

		// members
		void* m_callbackFunc;                                // 0x20
		hkEnum<CallbackType, std::uint32_t> m_callbackType;  // 0x28
		std::uint8_t pad2C[0x4];                             // 0x2C
		std::uint64_t m_userData0;                           // 0x30
		std::uint64_t m_userData1;                           // 0x38
		std::uint64_t m_userData2;                           // 0x40
	};
	static_assert(sizeof(hkpCallbackConstraintMotor) == 0x48);
	static_assert(offsetof(hkpCallbackConstraintMotor, m_callbackFunc) == 0x20);
	static_assert(offsetof(hkpCallbackConstraintMotor, m_callbackType) == 0x28);
	static_assert(offsetof(hkpCallbackConstraintMotor, m_userData0) == 0x30);
	static_assert(offsetof(hkpCallbackConstraintMotor, m_userData1) == 0x38);
	static_assert(offsetof(hkpCallbackConstraintMotor, m_userData2) == 0x40);
}
