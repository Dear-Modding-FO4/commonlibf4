#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbGenerator.h"

namespace RE
{
	class hkbBlenderGeneratorChild;

	class __declspec(novtable) hkbBlenderGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBlenderGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbBlenderGenerator };

		enum class BlenderFlags : std::uint32_t
		{
			kFlagSync = 1,
			kFlagSmoothGeneratorWeights = 4,
			kFlagDontDeactivateChildrenWithZeroWeights = 8,
			kFlagParametricBlend = 16,
			kFlagIsParametricBlendCyclic = 32,
			kFlagForceDensePose = 64,
			kFlagBlendMotionOfAdditiveAnimations = 128,
			kFlagUseVelocitySynchronization = 256
		};

		// members
		float m_referencePoseWeightThreshold;           // 0x88
		float m_blendParameter;                         // 0x8C
		float m_minCyclicBlendParameter;                // 0x90
		float m_maxCyclicBlendParameter;                // 0x94
		std::int16_t m_indexOfSyncMasterChild;          // 0x98
		std::int16_t m_flags;                           // 0x9A
		bool m_subtractLastChild;                       // 0x9C
		std::uint8_t pad9D[0x3];                        // 0x9D
		hkArray<hkbBlenderGeneratorChild*> m_children;  // 0xA0
		std::uint8_t m_childrenInternalStates[0x10];    // 0xB0
		std::uint8_t m_sortedChildren[0x10];            // 0xC0
		float m_endIntervalWeight;                      // 0xD0
		std::int32_t m_numActiveChildren;               // 0xD4
		std::int16_t m_beginIntervalIndex;              // 0xD8
		std::int16_t m_endIntervalIndex;                // 0xDA
		bool m_initSync;                                // 0xDC
		bool m_doSubtractiveBlend;                      // 0xDD
	};
	static_assert(sizeof(hkbBlenderGenerator) == 0xE0);
	static_assert(offsetof(hkbBlenderGenerator, m_referencePoseWeightThreshold) == 0x88);
	static_assert(offsetof(hkbBlenderGenerator, m_blendParameter) == 0x8C);
	static_assert(offsetof(hkbBlenderGenerator, m_minCyclicBlendParameter) == 0x90);
	static_assert(offsetof(hkbBlenderGenerator, m_maxCyclicBlendParameter) == 0x94);
	static_assert(offsetof(hkbBlenderGenerator, m_indexOfSyncMasterChild) == 0x98);
	static_assert(offsetof(hkbBlenderGenerator, m_flags) == 0x9A);
	static_assert(offsetof(hkbBlenderGenerator, m_subtractLastChild) == 0x9C);
	static_assert(offsetof(hkbBlenderGenerator, m_children) == 0xA0);
	static_assert(offsetof(hkbBlenderGenerator, m_childrenInternalStates) == 0xB0);
	static_assert(offsetof(hkbBlenderGenerator, m_sortedChildren) == 0xC0);
	static_assert(offsetof(hkbBlenderGenerator, m_endIntervalWeight) == 0xD0);
	static_assert(offsetof(hkbBlenderGenerator, m_numActiveChildren) == 0xD4);
	static_assert(offsetof(hkbBlenderGenerator, m_beginIntervalIndex) == 0xD8);
	static_assert(offsetof(hkbBlenderGenerator, m_endIntervalIndex) == 0xDA);
	static_assert(offsetof(hkbBlenderGenerator, m_initSync) == 0xDC);
	static_assert(offsetof(hkbBlenderGenerator, m_doSubtractiveBlend) == 0xDD);
}
