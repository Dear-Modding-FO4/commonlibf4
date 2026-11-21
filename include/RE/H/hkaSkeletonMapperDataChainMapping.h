#pragma once

#include "RE/H/hkQsTransformf.h"

namespace RE
{
	class hkaSkeletonMapperDataChainMapping
	{
	public:

		// members
		std::int16_t m_startBoneA;              // 0x00
		std::int16_t m_endBoneA;                // 0x02
		std::int16_t m_startBoneB;              // 0x04
		std::int16_t m_endBoneB;                // 0x06
		std::uint8_t unk08[0x8];                // 0x08
		hkQsTransformf m_startAFromBTransform;  // 0x10
		hkQsTransformf m_endAFromBTransform;    // 0x40
	};
	static_assert(sizeof(hkaSkeletonMapperDataChainMapping) == 0x70);
	static_assert(offsetof(hkaSkeletonMapperDataChainMapping, m_startBoneA) == 0x0);
	static_assert(offsetof(hkaSkeletonMapperDataChainMapping, m_endBoneA) == 0x2);
	static_assert(offsetof(hkaSkeletonMapperDataChainMapping, m_startBoneB) == 0x4);
	static_assert(offsetof(hkaSkeletonMapperDataChainMapping, m_endBoneB) == 0x6);
	static_assert(offsetof(hkaSkeletonMapperDataChainMapping, m_startAFromBTransform) == 0x10);
	static_assert(offsetof(hkaSkeletonMapperDataChainMapping, m_endAFromBTransform) == 0x40);
}
