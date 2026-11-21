#pragma once

#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbExtractRagdollPoseModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbExtractRagdollPoseModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbExtractRagdollPoseModifier };

		// members
		std::int16_t m_poseMatchingBone0;    // 0x58
		std::int16_t m_poseMatchingBone1;    // 0x5A
		std::int16_t m_poseMatchingBone2;    // 0x5C
		bool m_enableComputeWorldFromModel;  // 0x5E
	};
	static_assert(sizeof(hkbExtractRagdollPoseModifier) == 0x60);
	static_assert(offsetof(hkbExtractRagdollPoseModifier, m_poseMatchingBone0) == 0x58);
	static_assert(offsetof(hkbExtractRagdollPoseModifier, m_poseMatchingBone1) == 0x5A);
	static_assert(offsetof(hkbExtractRagdollPoseModifier, m_poseMatchingBone2) == 0x5C);
	static_assert(offsetof(hkbExtractRagdollPoseModifier, m_enableComputeWorldFromModel) == 0x5E);
}
