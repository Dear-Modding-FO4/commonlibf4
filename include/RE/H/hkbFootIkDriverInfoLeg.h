#pragma once

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkbFootIkDriverInfoLeg
	{
	public:

		// members
		hkVector4f m_kneeAxisLS;           // 0x00
		hkVector4f m_footEndLS;            // 0x10
		float m_footPlantedAnkleHeightMS;  // 0x20
		float m_footRaisedAnkleHeightMS;   // 0x24
		float m_maxAnkleHeightMS;          // 0x28
		float m_minAnkleHeightMS;          // 0x2C
		float m_maxKneeAngleDegrees;       // 0x30
		float m_minKneeAngleDegrees;       // 0x34
		float m_maxAnkleAngleDegrees;      // 0x38
		std::int16_t m_hipIndex;           // 0x3C
		std::int16_t m_hipSiblingIndex;    // 0x3E
		std::int16_t m_kneeIndex;          // 0x40
		std::int16_t m_kneeSiblingIndex;   // 0x42
		std::int16_t m_ankleIndex;         // 0x44
	};
	static_assert(sizeof(hkbFootIkDriverInfoLeg) == 0x50);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_kneeAxisLS) == 0x0);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_footEndLS) == 0x10);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_footPlantedAnkleHeightMS) == 0x20);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_footRaisedAnkleHeightMS) == 0x24);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_maxAnkleHeightMS) == 0x28);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_minAnkleHeightMS) == 0x2C);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_maxKneeAngleDegrees) == 0x30);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_minKneeAngleDegrees) == 0x34);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_maxAnkleAngleDegrees) == 0x38);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_hipIndex) == 0x3C);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_hipSiblingIndex) == 0x3E);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_kneeIndex) == 0x40);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_kneeSiblingIndex) == 0x42);
	static_assert(offsetof(hkbFootIkDriverInfoLeg, m_ankleIndex) == 0x44);
}
