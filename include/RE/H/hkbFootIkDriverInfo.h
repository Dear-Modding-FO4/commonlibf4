#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbFootIkDriverInfoLeg;

	class __declspec(novtable) hkbFootIkDriverInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbFootIkDriverInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbFootIkDriverInfo };

		// members
		hkArray<hkbFootIkDriverInfoLeg> m_legs;  // 0x10
		float m_raycastDistanceUp;               // 0x20
		float m_raycastDistanceDown;             // 0x24
		float m_originalGroundHeightMS;          // 0x28
		float m_verticalOffset;                  // 0x2C
		std::uint32_t m_collisionFilterInfo;     // 0x30
		float m_forwardAlignFraction;            // 0x34
		float m_sidewaysAlignFraction;           // 0x38
		float m_sidewaysSampleWidth;             // 0x3C
		bool m_lockFeetWhenPlanted;              // 0x40
		bool m_useCharacterUpVector;             // 0x41
		bool m_isQuadrupedNarrow;                // 0x42
		bool m_keepSourceFootEndAboveGround;     // 0x43
	};
	static_assert(sizeof(hkbFootIkDriverInfo) == 0x48);
	static_assert(offsetof(hkbFootIkDriverInfo, m_legs) == 0x10);
	static_assert(offsetof(hkbFootIkDriverInfo, m_raycastDistanceUp) == 0x20);
	static_assert(offsetof(hkbFootIkDriverInfo, m_raycastDistanceDown) == 0x24);
	static_assert(offsetof(hkbFootIkDriverInfo, m_originalGroundHeightMS) == 0x28);
	static_assert(offsetof(hkbFootIkDriverInfo, m_verticalOffset) == 0x2C);
	static_assert(offsetof(hkbFootIkDriverInfo, m_collisionFilterInfo) == 0x30);
	static_assert(offsetof(hkbFootIkDriverInfo, m_forwardAlignFraction) == 0x34);
	static_assert(offsetof(hkbFootIkDriverInfo, m_sidewaysAlignFraction) == 0x38);
	static_assert(offsetof(hkbFootIkDriverInfo, m_sidewaysSampleWidth) == 0x3C);
	static_assert(offsetof(hkbFootIkDriverInfo, m_lockFeetWhenPlanted) == 0x40);
	static_assert(offsetof(hkbFootIkDriverInfo, m_useCharacterUpVector) == 0x41);
	static_assert(offsetof(hkbFootIkDriverInfo, m_isQuadrupedNarrow) == 0x42);
	static_assert(offsetof(hkbFootIkDriverInfo, m_keepSourceFootEndAboveGround) == 0x43);
}
