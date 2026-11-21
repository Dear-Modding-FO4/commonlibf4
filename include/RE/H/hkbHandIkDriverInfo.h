#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbHandIkDriverInfoHand;

	class __declspec(novtable) hkbHandIkDriverInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbHandIkDriverInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbHandIkDriverInfo };

		// members
		hkArray<hkbHandIkDriverInfoHand> m_hands;  // 0x10
		std::int8_t m_fadeInOutCurve;              // 0x20
	};
	static_assert(sizeof(hkbHandIkDriverInfo) == 0x28);
	static_assert(offsetof(hkbHandIkDriverInfo, m_hands) == 0x10);
	static_assert(offsetof(hkbHandIkDriverInfo, m_fadeInOutCurve) == 0x20);
}
