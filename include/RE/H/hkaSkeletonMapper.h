#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkaSkeletonMapperData.h"

namespace RE
{
	class __declspec(novtable) hkaSkeletonMapper :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaSkeletonMapper };
		inline static constexpr auto VTABLE{ VTABLE::hkaSkeletonMapper };

		enum class ConstraintSource : std::uint32_t
		{
			kNoConstraints = 0,
			kReferencePose = 1,
			kCurrentPose = 2
		};

		// members
		hkaSkeletonMapperData m_mapping;  // 0x10
	};
	static_assert(sizeof(hkaSkeletonMapper) == 0xC0);
	static_assert(offsetof(hkaSkeletonMapper, m_mapping) == 0x10);
}
