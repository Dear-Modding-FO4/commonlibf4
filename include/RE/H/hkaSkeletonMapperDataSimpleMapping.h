#pragma once

#include "RE/H/hkQsTransformf.h"

namespace RE
{
	class hkaSkeletonMapperDataSimpleMapping
	{
	public:

		// members
		std::int16_t m_boneA;              // 0x00
		std::int16_t m_boneB;              // 0x02
		std::uint8_t unk04[0xC];           // 0x04
		hkQsTransformf m_aFromBTransform;  // 0x10
	};
	static_assert(sizeof(hkaSkeletonMapperDataSimpleMapping) == 0x40);
	static_assert(offsetof(hkaSkeletonMapperDataSimpleMapping, m_boneA) == 0x0);
	static_assert(offsetof(hkaSkeletonMapperDataSimpleMapping, m_boneB) == 0x2);
	static_assert(offsetof(hkaSkeletonMapperDataSimpleMapping, m_aFromBTransform) == 0x10);
}
