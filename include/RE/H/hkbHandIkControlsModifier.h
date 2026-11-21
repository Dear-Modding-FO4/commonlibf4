#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbHandIkControlsModifierHand;

	class __declspec(novtable) hkbHandIkControlsModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbHandIkControlsModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbHandIkControlsModifier };

		// members
		hkArray<hkbHandIkControlsModifierHand> m_hands;  // 0x58
	};
	static_assert(sizeof(hkbHandIkControlsModifier) == 0x68);
	static_assert(offsetof(hkbHandIkControlsModifier, m_hands) == 0x58);
}
