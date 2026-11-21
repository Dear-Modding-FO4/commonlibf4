#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkaSkeletonMapper;

	class __declspec(novtable) hkaDefaultAnimationControlMapperData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaDefaultAnimationControlMapperData };
		inline static constexpr auto VTABLE{ VTABLE::hkaDefaultAnimationControlMapperData };

		// members
		hkaSkeletonMapper* m_mapper;                    // 0x10
		hkArray<std::int16_t> m_srcBoneToTrackIndices;  // 0x18
		hkArray<std::int16_t> m_dstBoneToTrackIndices;  // 0x28
		hkArray<std::int16_t> m_dstTrackToBoneIndices;  // 0x38
	};
	static_assert(sizeof(hkaDefaultAnimationControlMapperData) == 0x48);
	static_assert(offsetof(hkaDefaultAnimationControlMapperData, m_mapper) == 0x10);
	static_assert(offsetof(hkaDefaultAnimationControlMapperData, m_srcBoneToTrackIndices) == 0x18);
	static_assert(offsetof(hkaDefaultAnimationControlMapperData, m_dstBoneToTrackIndices) == 0x28);
	static_assert(offsetof(hkaDefaultAnimationControlMapperData, m_dstTrackToBoneIndices) == 0x38);
}
