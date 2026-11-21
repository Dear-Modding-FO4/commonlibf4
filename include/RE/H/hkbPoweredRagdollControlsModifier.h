#pragma once

#include "RE/H/hkbModifier.h"
#include "RE/H/hkbPoweredRagdollControlData.h"
#include "RE/H/hkbWorldFromModelModeData.h"

namespace RE
{
	class hkbBoneIndexArray;
	class hkbBoneWeightArray;

	class __declspec(novtable) hkbPoweredRagdollControlsModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbPoweredRagdollControlsModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbPoweredRagdollControlsModifier };

		// members
		std::uint8_t unk58[0x8];                             // 0x58
		hkbPoweredRagdollControlData m_controlData;          // 0x60
		hkbBoneIndexArray* m_bones;                          // 0x80
		hkbWorldFromModelModeData m_worldFromModelModeData;  // 0x88
		hkbBoneWeightArray* m_boneWeights;                   // 0x90
		float m_animationBlendFraction;                      // 0x98
	};
	static_assert(sizeof(hkbPoweredRagdollControlsModifier) == 0xA0);
	static_assert(offsetof(hkbPoweredRagdollControlsModifier, m_controlData) == 0x60);
	static_assert(offsetof(hkbPoweredRagdollControlsModifier, m_bones) == 0x80);
	static_assert(offsetof(hkbPoweredRagdollControlsModifier, m_worldFromModelModeData) == 0x88);
	static_assert(offsetof(hkbPoweredRagdollControlsModifier, m_boneWeights) == 0x90);
	static_assert(offsetof(hkbPoweredRagdollControlsModifier, m_animationBlendFraction) == 0x98);
}
