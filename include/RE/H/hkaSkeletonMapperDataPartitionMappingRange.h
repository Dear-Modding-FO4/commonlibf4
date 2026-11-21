#pragma once

namespace RE
{
	class hkaSkeletonMapperDataPartitionMappingRange
	{
	public:

		// members
		std::int32_t m_startMappingIndex;  // 0x00
		std::int32_t m_numMappings;        // 0x04
	};
	static_assert(sizeof(hkaSkeletonMapperDataPartitionMappingRange) == 0x8);
	static_assert(offsetof(hkaSkeletonMapperDataPartitionMappingRange, m_startMappingIndex) == 0x0);
	static_assert(offsetof(hkaSkeletonMapperDataPartitionMappingRange, m_numMappings) == 0x4);
}
