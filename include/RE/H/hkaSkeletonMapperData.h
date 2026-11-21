#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkQsTransformf.h"

namespace RE
{
	class hkaSkeleton;
	class hkaSkeletonMapperDataChainMapping;
	class hkaSkeletonMapperDataPartitionMappingRange;
	class hkaSkeletonMapperDataSimpleMapping;

	class hkaSkeletonMapperData
	{
	public:

		enum class MappingType : std::int32_t
		{
			kRagdollMapping = 0,
			kRetargetingMapping = 1
		};

		// members
		hkaSkeleton* m_skeletonA;                                                            // 0x00
		hkaSkeleton* m_skeletonB;                                                            // 0x08
		hkArray<std::int16_t> m_partitionMap;                                                // 0x10
		hkArray<hkaSkeletonMapperDataPartitionMappingRange> m_simpleMappingPartitionRanges;  // 0x20
		hkArray<hkaSkeletonMapperDataPartitionMappingRange> m_chainMappingPartitionRanges;   // 0x30
		hkArray<hkaSkeletonMapperDataSimpleMapping> m_simpleMappings;                        // 0x40
		hkArray<hkaSkeletonMapperDataChainMapping> m_chainMappings;                          // 0x50
		hkArray<std::int16_t> m_unmappedBones;                                               // 0x60
		hkQsTransformf m_extractedMotionMapping;                                             // 0x70
		bool m_keepUnmappedLocal;                                                            // 0xA0
		std::uint8_t padA1[0x3];                                                             // 0xA1
		hkEnum<MappingType, std::int32_t> m_mappingType;                                     // 0xA4
	};
	static_assert(sizeof(hkaSkeletonMapperData) == 0xB0);
	static_assert(offsetof(hkaSkeletonMapperData, m_skeletonA) == 0x0);
	static_assert(offsetof(hkaSkeletonMapperData, m_skeletonB) == 0x8);
	static_assert(offsetof(hkaSkeletonMapperData, m_partitionMap) == 0x10);
	static_assert(offsetof(hkaSkeletonMapperData, m_simpleMappingPartitionRanges) == 0x20);
	static_assert(offsetof(hkaSkeletonMapperData, m_chainMappingPartitionRanges) == 0x30);
	static_assert(offsetof(hkaSkeletonMapperData, m_simpleMappings) == 0x40);
	static_assert(offsetof(hkaSkeletonMapperData, m_chainMappings) == 0x50);
	static_assert(offsetof(hkaSkeletonMapperData, m_unmappedBones) == 0x60);
	static_assert(offsetof(hkaSkeletonMapperData, m_extractedMotionMapping) == 0x70);
	static_assert(offsetof(hkaSkeletonMapperData, m_keepUnmappedLocal) == 0xA0);
	static_assert(offsetof(hkaSkeletonMapperData, m_mappingType) == 0xA4);
}
