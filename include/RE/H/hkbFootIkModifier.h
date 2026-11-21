#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbFootIkGains.h"
#include "RE/H/hkbModifier.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbFootIkModifierInternalLegData;
	class hkbFootIkModifierLeg;

	class __declspec(novtable) hkbFootIkModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbFootIkModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbFootIkModifier };

		enum class AlignMode : std::uint8_t
		{
			kAlignModeForwardRight = 0,
			kAlignModeForward = 1
		};

		// members
		hkbFootIkGains m_gains;                                       // 0x58
		hkArray<hkbFootIkModifierLeg> m_legs;                         // 0x88
		float m_raycastDistanceUp;                                    // 0x98
		float m_raycastDistanceDown;                                  // 0x9C
		float m_originalGroundHeightMS;                               // 0xA0
		float m_errorOut;                                             // 0xA4
		float m_verticalOffset;                                       // 0xA8
		std::uint32_t m_collisionFilterInfo;                          // 0xAC
		float m_forwardAlignFraction;                                 // 0xB0
		float m_sidewaysAlignFraction;                                // 0xB4
		float m_sidewaysSampleWidth;                                  // 0xB8
		bool m_useTrackData;                                          // 0xBC
		bool m_lockFeetWhenPlanted;                                   // 0xBD
		bool m_useCharacterUpVector;                                  // 0xBE
		bool m_keepSourceFootEndAboveGround;                          // 0xBF
		hkEnum<AlignMode, std::int8_t> m_alignMode;                                      // 0xC0
		std::uint8_t padC1[0x7];                                      // 0xC1
		hkArray<hkbFootIkModifierInternalLegData> m_internalLegData;  // 0xC8
		float m_prevIsFootIkEnabled;                                  // 0xD8
		bool m_isSetUp;                                               // 0xDC
		bool m_isGroundPositionValid;                                 // 0xDD
	};
	static_assert(sizeof(hkbFootIkModifier) == 0xE0);
	static_assert(offsetof(hkbFootIkModifier, m_gains) == 0x58);
	static_assert(offsetof(hkbFootIkModifier, m_legs) == 0x88);
	static_assert(offsetof(hkbFootIkModifier, m_raycastDistanceUp) == 0x98);
	static_assert(offsetof(hkbFootIkModifier, m_raycastDistanceDown) == 0x9C);
	static_assert(offsetof(hkbFootIkModifier, m_originalGroundHeightMS) == 0xA0);
	static_assert(offsetof(hkbFootIkModifier, m_errorOut) == 0xA4);
	static_assert(offsetof(hkbFootIkModifier, m_verticalOffset) == 0xA8);
	static_assert(offsetof(hkbFootIkModifier, m_collisionFilterInfo) == 0xAC);
	static_assert(offsetof(hkbFootIkModifier, m_forwardAlignFraction) == 0xB0);
	static_assert(offsetof(hkbFootIkModifier, m_sidewaysAlignFraction) == 0xB4);
	static_assert(offsetof(hkbFootIkModifier, m_sidewaysSampleWidth) == 0xB8);
	static_assert(offsetof(hkbFootIkModifier, m_useTrackData) == 0xBC);
	static_assert(offsetof(hkbFootIkModifier, m_lockFeetWhenPlanted) == 0xBD);
	static_assert(offsetof(hkbFootIkModifier, m_useCharacterUpVector) == 0xBE);
	static_assert(offsetof(hkbFootIkModifier, m_keepSourceFootEndAboveGround) == 0xBF);
	static_assert(offsetof(hkbFootIkModifier, m_alignMode) == 0xC0);
	static_assert(offsetof(hkbFootIkModifier, m_internalLegData) == 0xC8);
	static_assert(offsetof(hkbFootIkModifier, m_prevIsFootIkEnabled) == 0xD8);
	static_assert(offsetof(hkbFootIkModifier, m_isSetUp) == 0xDC);
	static_assert(offsetof(hkbFootIkModifier, m_isGroundPositionValid) == 0xDD);
}
