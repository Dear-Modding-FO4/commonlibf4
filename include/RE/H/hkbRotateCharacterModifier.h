#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbRotateCharacterModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRotateCharacterModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbRotateCharacterModifier };

		// members
		float m_degreesPerSecond;     // 0x58
		float m_speedMultiplier;      // 0x5C
		hkVector4f m_axisOfRotation;  // 0x60
		float m_angle;                // 0x70
	};
	static_assert(sizeof(hkbRotateCharacterModifier) == 0x80);
	static_assert(offsetof(hkbRotateCharacterModifier, m_degreesPerSecond) == 0x58);
	static_assert(offsetof(hkbRotateCharacterModifier, m_speedMultiplier) == 0x5C);
	static_assert(offsetof(hkbRotateCharacterModifier, m_axisOfRotation) == 0x60);
	static_assert(offsetof(hkbRotateCharacterModifier, m_angle) == 0x70);
}
