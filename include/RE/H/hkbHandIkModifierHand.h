#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkbHandIkModifierHand
	{
	public:

		// members
		hkVector4f m_elbowAxisLS;                 // 0x00
		hkVector4f m_backHandNormalLS;            // 0x10
		hkVector4f m_handOffsetLS;                // 0x20
		hkQuaternionf m_handOrientationOffsetLS;  // 0x30
		float m_maxElbowAngleDegrees;             // 0x40
		float m_minElbowAngleDegrees;             // 0x44
		std::int16_t m_shoulderIndex;             // 0x48
		std::int16_t m_shoulderSiblingIndex;      // 0x4A
		std::int16_t m_elbowIndex;                // 0x4C
		std::int16_t m_elbowSiblingIndex;         // 0x4E
		std::int16_t m_wristIndex;                // 0x50
		bool m_enforceEndPosition;                // 0x52
		bool m_enforceEndRotation;                // 0x53
		std::uint8_t unk54[0x4];                  // 0x54
		hkStringPtr m_localFrameName;             // 0x58
	};
	static_assert(sizeof(hkbHandIkModifierHand) == 0x60);
	static_assert(offsetof(hkbHandIkModifierHand, m_elbowAxisLS) == 0x0);
	static_assert(offsetof(hkbHandIkModifierHand, m_backHandNormalLS) == 0x10);
	static_assert(offsetof(hkbHandIkModifierHand, m_handOffsetLS) == 0x20);
	static_assert(offsetof(hkbHandIkModifierHand, m_handOrientationOffsetLS) == 0x30);
	static_assert(offsetof(hkbHandIkModifierHand, m_maxElbowAngleDegrees) == 0x40);
	static_assert(offsetof(hkbHandIkModifierHand, m_minElbowAngleDegrees) == 0x44);
	static_assert(offsetof(hkbHandIkModifierHand, m_shoulderIndex) == 0x48);
	static_assert(offsetof(hkbHandIkModifierHand, m_shoulderSiblingIndex) == 0x4A);
	static_assert(offsetof(hkbHandIkModifierHand, m_elbowIndex) == 0x4C);
	static_assert(offsetof(hkbHandIkModifierHand, m_elbowSiblingIndex) == 0x4E);
	static_assert(offsetof(hkbHandIkModifierHand, m_wristIndex) == 0x50);
	static_assert(offsetof(hkbHandIkModifierHand, m_enforceEndPosition) == 0x52);
	static_assert(offsetof(hkbHandIkModifierHand, m_enforceEndRotation) == 0x53);
	static_assert(offsetof(hkbHandIkModifierHand, m_localFrameName) == 0x58);
}
