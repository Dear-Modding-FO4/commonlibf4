#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbGravityModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbGravityModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbGravityModifier };

		// members
		std::uint8_t unk58[0x8];           // 0x58
		hkVector4f m_initialVelocityInMS;  // 0x60
		float m_gravityConstant;           // 0x70
		std::uint8_t unk74[0xC];           // 0x74
		hkVector4f m_currentVelocityInMS;  // 0x80
		float m_secondsElapsed;            // 0x90
	};
	static_assert(sizeof(hkbGravityModifier) == 0xA0);
	static_assert(offsetof(hkbGravityModifier, m_initialVelocityInMS) == 0x60);
	static_assert(offsetof(hkbGravityModifier, m_gravityConstant) == 0x70);
	static_assert(offsetof(hkbGravityModifier, m_currentVelocityInMS) == 0x80);
	static_assert(offsetof(hkbGravityModifier, m_secondsElapsed) == 0x90);
}
