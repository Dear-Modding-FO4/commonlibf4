#pragma once

#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkbBlendingTransitionEffect.h"

namespace RE
{
	class __declspec(novtable) hkbHoldFromBlendingTransitionEffect :
		public hkbBlendingTransitionEffect  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbHoldFromBlendingTransitionEffect };
		inline static constexpr auto VTABLE{ VTABLE::hkbHoldFromBlendingTransitionEffect };

		// members
		void* m_heldFromPose;                 // 0x140
		std::int32_t m_heldFromPoseSize;      // 0x148
		std::uint8_t pad14C[0x4];             // 0x14C
		hkQsTransformf m_heldWorldFromModel;  // 0x150
		void* m_heldFromSkeleton;             // 0x180
	};
	static_assert(sizeof(hkbHoldFromBlendingTransitionEffect) == 0x190);
	static_assert(offsetof(hkbHoldFromBlendingTransitionEffect, m_heldFromPose) == 0x140);
	static_assert(offsetof(hkbHoldFromBlendingTransitionEffect, m_heldFromPoseSize) == 0x148);
	static_assert(offsetof(hkbHoldFromBlendingTransitionEffect, m_heldWorldFromModel) == 0x150);
	static_assert(offsetof(hkbHoldFromBlendingTransitionEffect, m_heldFromSkeleton) == 0x180);
}
