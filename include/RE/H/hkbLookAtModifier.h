#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbLookAtModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbLookAtModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbLookAtModifier };

		// members
		std::uint8_t unk58[0x8];          // 0x58
		hkVector4f m_targetWS;            // 0x60
		hkVector4f m_headForwardLS;       // 0x70
		hkVector4f m_neckForwardLS;       // 0x80
		hkVector4f m_neckRightLS;         // 0x90
		hkVector4f m_eyePositionHS;       // 0xA0
		float m_newTargetGain;            // 0xB0
		float m_onGain;                   // 0xB4
		float m_offGain;                  // 0xB8
		float m_limitAngleDegrees;        // 0xBC
		float m_limitAngleLeft;           // 0xC0
		float m_limitAngleRight;          // 0xC4
		float m_limitAngleUp;             // 0xC8
		float m_limitAngleDown;           // 0xCC
		std::int16_t m_headIndex;         // 0xD0
		std::int16_t m_neckIndex;         // 0xD2
		bool m_isOn;                      // 0xD4
		bool m_individualLimitsOn;        // 0xD5
		bool m_isTargetInsideLimitCone;   // 0xD6
		std::uint8_t unkD7[0x9];          // 0xD7
		hkVector4f m_lookAtLastTargetWS;  // 0xE0
		float m_lookAtWeight;             // 0xF0
	};
	static_assert(sizeof(hkbLookAtModifier) == 0x100);
	static_assert(offsetof(hkbLookAtModifier, m_targetWS) == 0x60);
	static_assert(offsetof(hkbLookAtModifier, m_headForwardLS) == 0x70);
	static_assert(offsetof(hkbLookAtModifier, m_neckForwardLS) == 0x80);
	static_assert(offsetof(hkbLookAtModifier, m_neckRightLS) == 0x90);
	static_assert(offsetof(hkbLookAtModifier, m_eyePositionHS) == 0xA0);
	static_assert(offsetof(hkbLookAtModifier, m_newTargetGain) == 0xB0);
	static_assert(offsetof(hkbLookAtModifier, m_onGain) == 0xB4);
	static_assert(offsetof(hkbLookAtModifier, m_offGain) == 0xB8);
	static_assert(offsetof(hkbLookAtModifier, m_limitAngleDegrees) == 0xBC);
	static_assert(offsetof(hkbLookAtModifier, m_limitAngleLeft) == 0xC0);
	static_assert(offsetof(hkbLookAtModifier, m_limitAngleRight) == 0xC4);
	static_assert(offsetof(hkbLookAtModifier, m_limitAngleUp) == 0xC8);
	static_assert(offsetof(hkbLookAtModifier, m_limitAngleDown) == 0xCC);
	static_assert(offsetof(hkbLookAtModifier, m_headIndex) == 0xD0);
	static_assert(offsetof(hkbLookAtModifier, m_neckIndex) == 0xD2);
	static_assert(offsetof(hkbLookAtModifier, m_isOn) == 0xD4);
	static_assert(offsetof(hkbLookAtModifier, m_individualLimitsOn) == 0xD5);
	static_assert(offsetof(hkbLookAtModifier, m_isTargetInsideLimitCone) == 0xD6);
	static_assert(offsetof(hkbLookAtModifier, m_lookAtLastTargetWS) == 0xE0);
	static_assert(offsetof(hkbLookAtModifier, m_lookAtWeight) == 0xF0);
}
