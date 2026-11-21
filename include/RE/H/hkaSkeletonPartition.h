#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkaSkeletonPartition
	{
	public:

		// members
		hkStringPtr m_name;             // 0x00
		std::int16_t m_startBoneIndex;  // 0x08
		std::int16_t m_numBones;        // 0x0A
	};
	static_assert(sizeof(hkaSkeletonPartition) == 0x10);
	static_assert(offsetof(hkaSkeletonPartition, m_name) == 0x0);
	static_assert(offsetof(hkaSkeletonPartition, m_startBoneIndex) == 0x8);
	static_assert(offsetof(hkaSkeletonPartition, m_numBones) == 0xA);
}
