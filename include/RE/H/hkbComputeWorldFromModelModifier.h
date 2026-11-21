#pragma once

#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbComputeWorldFromModelModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbComputeWorldFromModelModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbComputeWorldFromModelModifier };

		// members
		std::int16_t m_poseMatchingRootBoneIndex;     // 0x58
		std::int16_t m_poseMatchingOtherBoneIndex;    // 0x5A
		std::int16_t m_poseMatchingAnotherBoneIndex;  // 0x5C
	};
	static_assert(sizeof(hkbComputeWorldFromModelModifier) == 0x60);
	static_assert(offsetof(hkbComputeWorldFromModelModifier, m_poseMatchingRootBoneIndex) == 0x58);
	static_assert(offsetof(hkbComputeWorldFromModelModifier, m_poseMatchingOtherBoneIndex) == 0x5A);
	static_assert(offsetof(hkbComputeWorldFromModelModifier, m_poseMatchingAnotherBoneIndex) == 0x5C);
}
