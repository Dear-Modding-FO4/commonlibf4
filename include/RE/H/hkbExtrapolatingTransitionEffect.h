#pragma once

#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkbBlendingTransitionEffect.h"
#include "RE/H/hkbGeneratorPartitionInfo.h"
#include "RE/H/hkbGeneratorSyncInfo.h"

namespace RE
{
	class __declspec(novtable) hkbExtrapolatingTransitionEffect :
		public hkbBlendingTransitionEffect  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbExtrapolatingTransitionEffect };
		inline static constexpr auto VTABLE{ VTABLE::hkbExtrapolatingTransitionEffect };

		// members
		hkbGeneratorSyncInfo m_fromGeneratorSyncInfo;            // 0x140
		hkbGeneratorPartitionInfo m_fromGeneratorPartitionInfo;  // 0x1E8
		hkQsTransformf m_worldFromModel;                         // 0x210
		hkQsTransformf m_motion;                                 // 0x240
		std::uint8_t m_pose[0x10];                               // 0x270
		std::uint8_t m_additivePose[0x10];                       // 0x280
		std::uint8_t m_boneWeights[0x10];                        // 0x290
		float m_toGeneratorDuration;                             // 0x2A0
		bool m_isFromGeneratorActive;                            // 0x2A4
		bool m_gotPose;                                          // 0x2A5
		bool m_gotAdditivePose;                                  // 0x2A6
	};
	static_assert(sizeof(hkbExtrapolatingTransitionEffect) == 0x2B0);
	static_assert(offsetof(hkbExtrapolatingTransitionEffect, m_fromGeneratorSyncInfo) == 0x140);
	static_assert(offsetof(hkbExtrapolatingTransitionEffect, m_fromGeneratorPartitionInfo) == 0x1E8);
	static_assert(offsetof(hkbExtrapolatingTransitionEffect, m_worldFromModel) == 0x210);
	static_assert(offsetof(hkbExtrapolatingTransitionEffect, m_motion) == 0x240);
	static_assert(offsetof(hkbExtrapolatingTransitionEffect, m_pose) == 0x270);
	static_assert(offsetof(hkbExtrapolatingTransitionEffect, m_additivePose) == 0x280);
	static_assert(offsetof(hkbExtrapolatingTransitionEffect, m_boneWeights) == 0x290);
	static_assert(offsetof(hkbExtrapolatingTransitionEffect, m_toGeneratorDuration) == 0x2A0);
	static_assert(offsetof(hkbExtrapolatingTransitionEffect, m_isFromGeneratorActive) == 0x2A4);
	static_assert(offsetof(hkbExtrapolatingTransitionEffect, m_gotPose) == 0x2A5);
	static_assert(offsetof(hkbExtrapolatingTransitionEffect, m_gotAdditivePose) == 0x2A6);
}
