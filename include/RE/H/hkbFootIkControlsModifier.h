#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbFootIkControlData.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbFootIkControlsModifierLeg;

	class __declspec(novtable) hkbFootIkControlsModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbFootIkControlsModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbFootIkControlsModifier };

		// members
		std::uint8_t unk58[0x8];                       // 0x58
		hkbFootIkControlData m_controlData;            // 0x60
		hkArray<hkbFootIkControlsModifierLeg> m_legs;  // 0xB0
		hkVector4f m_errorOutTranslation;              // 0xC0
		hkQuaternionf m_alignWithGroundRotation;       // 0xD0
	};
	static_assert(sizeof(hkbFootIkControlsModifier) == 0xE0);
	static_assert(offsetof(hkbFootIkControlsModifier, m_controlData) == 0x60);
	static_assert(offsetof(hkbFootIkControlsModifier, m_legs) == 0xB0);
	static_assert(offsetof(hkbFootIkControlsModifier, m_errorOutTranslation) == 0xC0);
	static_assert(offsetof(hkbFootIkControlsModifier, m_alignWithGroundRotation) == 0xD0);
}
