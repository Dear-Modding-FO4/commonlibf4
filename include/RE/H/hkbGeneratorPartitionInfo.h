#pragma once

namespace RE
{
	class hkbGeneratorPartitionInfo
	{
	public:

		// members
		std::uint32_t m_boneMask[8];       // 0x00
		std::uint32_t m_partitionMask[1];  // 0x20
		std::int16_t m_numBones;           // 0x24
		std::int16_t m_numMaxPartitions;   // 0x26
	};
	static_assert(sizeof(hkbGeneratorPartitionInfo) == 0x28);
	static_assert(offsetof(hkbGeneratorPartitionInfo, m_boneMask) == 0x0);
	static_assert(offsetof(hkbGeneratorPartitionInfo, m_partitionMask) == 0x20);
	static_assert(offsetof(hkbGeneratorPartitionInfo, m_numBones) == 0x24);
	static_assert(offsetof(hkbGeneratorPartitionInfo, m_numMaxPartitions) == 0x26);
}
