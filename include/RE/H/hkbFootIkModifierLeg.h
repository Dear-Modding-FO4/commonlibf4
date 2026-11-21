#pragma once

#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbEventProperty.h"

namespace RE
{
	class hkbFootIkModifierLeg
	{
	public:

		// members
		hkQsTransformf m_originalAnkleTransformMS;  // 0x00
		hkVector4f m_kneeAxisLS;                    // 0x30
		hkVector4f m_footEndLS;                     // 0x40
		hkbEventProperty m_ungroundedEvent;         // 0x50
		float m_footPlantedAnkleHeightMS;           // 0x60
		float m_footRaisedAnkleHeightMS;            // 0x64
		float m_maxAnkleHeightMS;                   // 0x68
		float m_minAnkleHeightMS;                   // 0x6C
		float m_maxKneeAngleDegrees;                // 0x70
		float m_minKneeAngleDegrees;                // 0x74
		float m_verticalError;                      // 0x78
		std::int16_t m_hipIndex;                    // 0x7C
		std::int16_t m_kneeIndex;                   // 0x7E
		std::int16_t m_ankleIndex;                  // 0x80
		bool m_hitSomething;                        // 0x82
		bool m_isPlantedMS;                         // 0x83
		bool m_isOriginalAnkleTransformMSSet;       // 0x84
	};
	static_assert(sizeof(hkbFootIkModifierLeg) == 0x90);
	static_assert(offsetof(hkbFootIkModifierLeg, m_originalAnkleTransformMS) == 0x0);
	static_assert(offsetof(hkbFootIkModifierLeg, m_kneeAxisLS) == 0x30);
	static_assert(offsetof(hkbFootIkModifierLeg, m_footEndLS) == 0x40);
	static_assert(offsetof(hkbFootIkModifierLeg, m_ungroundedEvent) == 0x50);
	static_assert(offsetof(hkbFootIkModifierLeg, m_footPlantedAnkleHeightMS) == 0x60);
	static_assert(offsetof(hkbFootIkModifierLeg, m_footRaisedAnkleHeightMS) == 0x64);
	static_assert(offsetof(hkbFootIkModifierLeg, m_maxAnkleHeightMS) == 0x68);
	static_assert(offsetof(hkbFootIkModifierLeg, m_minAnkleHeightMS) == 0x6C);
	static_assert(offsetof(hkbFootIkModifierLeg, m_maxKneeAngleDegrees) == 0x70);
	static_assert(offsetof(hkbFootIkModifierLeg, m_minKneeAngleDegrees) == 0x74);
	static_assert(offsetof(hkbFootIkModifierLeg, m_verticalError) == 0x78);
	static_assert(offsetof(hkbFootIkModifierLeg, m_hipIndex) == 0x7C);
	static_assert(offsetof(hkbFootIkModifierLeg, m_kneeIndex) == 0x7E);
	static_assert(offsetof(hkbFootIkModifierLeg, m_ankleIndex) == 0x80);
	static_assert(offsetof(hkbFootIkModifierLeg, m_hitSomething) == 0x82);
	static_assert(offsetof(hkbFootIkModifierLeg, m_isPlantedMS) == 0x83);
	static_assert(offsetof(hkbFootIkModifierLeg, m_isOriginalAnkleTransformMSSet) == 0x84);
}
