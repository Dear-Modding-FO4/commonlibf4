#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbGetWorldFromModelModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbGetWorldFromModelModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbGetWorldFromModelModifier };

		// members
		std::uint8_t unk58[0x8];      // 0x58
		hkVector4f m_translationOut;  // 0x60
		hkQuaternionf m_rotationOut;  // 0x70
	};
	static_assert(sizeof(hkbGetWorldFromModelModifier) == 0x80);
	static_assert(offsetof(hkbGetWorldFromModelModifier, m_translationOut) == 0x60);
	static_assert(offsetof(hkbGetWorldFromModelModifier, m_rotationOut) == 0x70);
}
