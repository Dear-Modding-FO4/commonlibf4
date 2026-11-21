#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkbGeneratorPartitionInfo.h"
#include "RE/H/hkbGeneratorSyncInfo.h"

namespace RE
{
	class __declspec(novtable) hkbExtrapolatingTransitionEffectInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbExtrapolatingTransitionEffectInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbExtrapolatingTransitionEffectInternalState };

		// members
		hkbGeneratorSyncInfo m_fromGeneratorSyncInfo;            // 0x10
		hkbGeneratorPartitionInfo m_fromGeneratorPartitionInfo;  // 0xB8
		hkQsTransformf m_worldFromModel;                         // 0xE0
		hkQsTransformf m_motion;                                 // 0x110
		hkArray<hkQsTransformf> m_pose;                          // 0x140
		hkArray<hkQsTransformf> m_additivePose;                  // 0x150
		hkArray<float> m_boneWeights;                            // 0x160
		float m_toGeneratorDuration;                             // 0x170
		bool m_isFromGeneratorActive;                            // 0x174
		bool m_gotPose;                                          // 0x175
		bool m_gotAdditivePose;                                  // 0x176
	};
	static_assert(sizeof(hkbExtrapolatingTransitionEffectInternalState) == 0x180);
	static_assert(offsetof(hkbExtrapolatingTransitionEffectInternalState, m_fromGeneratorSyncInfo) == 0x10);
	static_assert(offsetof(hkbExtrapolatingTransitionEffectInternalState, m_fromGeneratorPartitionInfo) == 0xB8);
	static_assert(offsetof(hkbExtrapolatingTransitionEffectInternalState, m_worldFromModel) == 0xE0);
	static_assert(offsetof(hkbExtrapolatingTransitionEffectInternalState, m_motion) == 0x110);
	static_assert(offsetof(hkbExtrapolatingTransitionEffectInternalState, m_pose) == 0x140);
	static_assert(offsetof(hkbExtrapolatingTransitionEffectInternalState, m_additivePose) == 0x150);
	static_assert(offsetof(hkbExtrapolatingTransitionEffectInternalState, m_boneWeights) == 0x160);
	static_assert(offsetof(hkbExtrapolatingTransitionEffectInternalState, m_toGeneratorDuration) == 0x170);
	static_assert(offsetof(hkbExtrapolatingTransitionEffectInternalState, m_isFromGeneratorActive) == 0x174);
	static_assert(offsetof(hkbExtrapolatingTransitionEffectInternalState, m_gotPose) == 0x175);
	static_assert(offsetof(hkbExtrapolatingTransitionEffectInternalState, m_gotAdditivePose) == 0x176);
}
