#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbComputeRotationToTargetModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbComputeRotationToTargetModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbComputeRotationToTargetModifier };

		// members
		std::uint8_t unk58[0x8];            // 0x58
		hkQuaternionf m_rotationOut;        // 0x60
		hkVector4f m_targetPosition;        // 0x70
		hkVector4f m_currentPosition;       // 0x80
		hkQuaternionf m_currentRotation;    // 0x90
		hkVector4f m_localAxisOfRotation;   // 0xA0
		hkVector4f m_localFacingDirection;  // 0xB0
		bool m_resultIsDelta;               // 0xC0
	};
	static_assert(sizeof(hkbComputeRotationToTargetModifier) == 0xD0);
	static_assert(offsetof(hkbComputeRotationToTargetModifier, m_rotationOut) == 0x60);
	static_assert(offsetof(hkbComputeRotationToTargetModifier, m_targetPosition) == 0x70);
	static_assert(offsetof(hkbComputeRotationToTargetModifier, m_currentPosition) == 0x80);
	static_assert(offsetof(hkbComputeRotationToTargetModifier, m_currentRotation) == 0x90);
	static_assert(offsetof(hkbComputeRotationToTargetModifier, m_localAxisOfRotation) == 0xA0);
	static_assert(offsetof(hkbComputeRotationToTargetModifier, m_localFacingDirection) == 0xB0);
	static_assert(offsetof(hkbComputeRotationToTargetModifier, m_resultIsDelta) == 0xC0);
}
