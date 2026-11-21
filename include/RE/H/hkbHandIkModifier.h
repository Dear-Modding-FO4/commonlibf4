#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbHandIkModifierHand;

	class __declspec(novtable) hkbHandIkModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbHandIkModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbHandIkModifier };

		// members
		hkArray<hkbHandIkModifierHand> m_hands;  // 0x58
		std::int8_t m_fadeInOutCurve;            // 0x68
		std::uint8_t pad69[0x7];                 // 0x69
		std::uint8_t m_internalHandData[0x10];   // 0x70
	};
	static_assert(sizeof(hkbHandIkModifier) == 0x80);
	static_assert(offsetof(hkbHandIkModifier, m_hands) == 0x58);
	static_assert(offsetof(hkbHandIkModifier, m_fadeInOutCurve) == 0x68);
	static_assert(offsetof(hkbHandIkModifier, m_internalHandData) == 0x70);
}
