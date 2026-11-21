#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbMoveCharacterModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbMoveCharacterModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbMoveCharacterModifier };

		// members
		std::uint8_t unk58[0x8];         // 0x58
		hkVector4f m_offsetPerSecondMS;  // 0x60
		float m_timeSinceLastModify;     // 0x70
	};
	static_assert(sizeof(hkbMoveCharacterModifier) == 0x80);
	static_assert(offsetof(hkbMoveCharacterModifier, m_offsetPerSecondMS) == 0x60);
	static_assert(offsetof(hkbMoveCharacterModifier, m_timeSinceLastModify) == 0x70);
}
