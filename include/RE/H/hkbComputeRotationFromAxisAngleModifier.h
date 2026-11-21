#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbComputeRotationFromAxisAngleModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbComputeRotationFromAxisAngleModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbComputeRotationFromAxisAngleModifier };

		// members
		std::uint8_t unk58[0x8];      // 0x58
		hkQuaternionf m_rotationOut;  // 0x60
		hkVector4f m_axis;            // 0x70
		float m_angleDegrees;         // 0x80
	};
	static_assert(sizeof(hkbComputeRotationFromAxisAngleModifier) == 0x90);
	static_assert(offsetof(hkbComputeRotationFromAxisAngleModifier, m_rotationOut) == 0x60);
	static_assert(offsetof(hkbComputeRotationFromAxisAngleModifier, m_axis) == 0x70);
	static_assert(offsetof(hkbComputeRotationFromAxisAngleModifier, m_angleDegrees) == 0x80);
}
