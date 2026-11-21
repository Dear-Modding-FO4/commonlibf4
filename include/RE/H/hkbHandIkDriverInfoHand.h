#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkbHandIkDriverInfoHand
	{
	public:

		// members
		hkVector4f m_elbowAxisLS;                // 0x00
		hkVector4f m_backHandNormalLS;           // 0x10
		hkVector4f m_handOffsetLS;               // 0x20
		hkQuaternionf m_handOrienationOffsetLS;  // 0x30
		float m_maxElbowAngleDegrees;            // 0x40
		float m_minElbowAngleDegrees;            // 0x44
		std::int16_t m_shoulderIndex;            // 0x48
		std::int16_t m_shoulderSiblingIndex;     // 0x4A
		std::int16_t m_elbowIndex;               // 0x4C
		std::int16_t m_elbowSiblingIndex;        // 0x4E
		std::int16_t m_wristIndex;               // 0x50
		bool m_enforceEndPosition;               // 0x52
		bool m_enforceEndRotation;               // 0x53
		std::uint8_t unk54[0x4];                 // 0x54
		hkStringPtr m_localFrameName;            // 0x58
	};
	static_assert(sizeof(hkbHandIkDriverInfoHand) == 0x60);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_elbowAxisLS) == 0x0);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_backHandNormalLS) == 0x10);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_handOffsetLS) == 0x20);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_handOrienationOffsetLS) == 0x30);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_maxElbowAngleDegrees) == 0x40);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_minElbowAngleDegrees) == 0x44);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_shoulderIndex) == 0x48);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_shoulderSiblingIndex) == 0x4A);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_elbowIndex) == 0x4C);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_elbowSiblingIndex) == 0x4E);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_wristIndex) == 0x50);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_enforceEndPosition) == 0x52);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_enforceEndRotation) == 0x53);
	static_assert(offsetof(hkbHandIkDriverInfoHand, m_localFrameName) == 0x58);
}
