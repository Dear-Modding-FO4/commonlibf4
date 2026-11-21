#pragma once

#include "RE/H/hkbModifier.h"
#include "RE/H/hkbRigidBodyRagdollControlData.h"

namespace RE
{
	class hkbBoneIndexArray;

	class __declspec(novtable) hkbRigidBodyRagdollControlsModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRigidBodyRagdollControlsModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbRigidBodyRagdollControlsModifier };

		// members
		std::uint8_t unk58[0x8];                       // 0x58
		hkbRigidBodyRagdollControlData m_controlData;  // 0x60
		hkbBoneIndexArray* m_bones;                    // 0xA0
		float m_animationBlendFraction;                // 0xA8
	};
	static_assert(sizeof(hkbRigidBodyRagdollControlsModifier) == 0xB0);
	static_assert(offsetof(hkbRigidBodyRagdollControlsModifier, m_controlData) == 0x60);
	static_assert(offsetof(hkbRigidBodyRagdollControlsModifier, m_bones) == 0xA0);
	static_assert(offsetof(hkbRigidBodyRagdollControlsModifier, m_animationBlendFraction) == 0xA8);
}
