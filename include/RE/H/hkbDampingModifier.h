#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbDampingModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbDampingModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbDampingModifier };

		// members
		float m_kP;                     // 0x58
		float m_kI;                     // 0x5C
		float m_kD;                     // 0x60
		bool m_enableScalarDamping;     // 0x64
		bool m_enableVectorDamping;     // 0x65
		std::uint8_t pad66[0x2];        // 0x66
		float m_rawValue;               // 0x68
		float m_dampedValue;            // 0x6C
		hkVector4f m_rawVector;         // 0x70
		hkVector4f m_dampedVector;      // 0x80
		hkVector4f m_vecErrorSum;       // 0x90
		hkVector4f m_vecPreviousError;  // 0xA0
		float m_errorSum;               // 0xB0
		float m_previousError;          // 0xB4
	};
	static_assert(sizeof(hkbDampingModifier) == 0xC0);
	static_assert(offsetof(hkbDampingModifier, m_kP) == 0x58);
	static_assert(offsetof(hkbDampingModifier, m_kI) == 0x5C);
	static_assert(offsetof(hkbDampingModifier, m_kD) == 0x60);
	static_assert(offsetof(hkbDampingModifier, m_enableScalarDamping) == 0x64);
	static_assert(offsetof(hkbDampingModifier, m_enableVectorDamping) == 0x65);
	static_assert(offsetof(hkbDampingModifier, m_rawValue) == 0x68);
	static_assert(offsetof(hkbDampingModifier, m_dampedValue) == 0x6C);
	static_assert(offsetof(hkbDampingModifier, m_rawVector) == 0x70);
	static_assert(offsetof(hkbDampingModifier, m_dampedVector) == 0x80);
	static_assert(offsetof(hkbDampingModifier, m_vecErrorSum) == 0x90);
	static_assert(offsetof(hkbDampingModifier, m_vecPreviousError) == 0xA0);
	static_assert(offsetof(hkbDampingModifier, m_errorSum) == 0xB0);
	static_assert(offsetof(hkbDampingModifier, m_previousError) == 0xB4);
}
