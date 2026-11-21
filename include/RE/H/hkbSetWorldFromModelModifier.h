#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbSetWorldFromModelModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSetWorldFromModelModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbSetWorldFromModelModifier };

		// members
		std::uint8_t unk58[0x8];   // 0x58
		hkVector4f m_translation;  // 0x60
		hkQuaternionf m_rotation;  // 0x70
		bool m_setTranslation;     // 0x80
		bool m_setRotation;        // 0x81
	};
	static_assert(sizeof(hkbSetWorldFromModelModifier) == 0x90);
	static_assert(offsetof(hkbSetWorldFromModelModifier, m_translation) == 0x60);
	static_assert(offsetof(hkbSetWorldFromModelModifier, m_rotation) == 0x70);
	static_assert(offsetof(hkbSetWorldFromModelModifier, m_setTranslation) == 0x80);
	static_assert(offsetof(hkbSetWorldFromModelModifier, m_setRotation) == 0x81);
}
