#pragma once

#include "RE/H/hknpCollisionFilter.h"
#include "RE/H/hknpPairCollisionFilterMapPairFilterKeyOverrideType.h"

namespace RE
{
	class hknpCollisionFilter;

	class __declspec(novtable) hknpPairCollisionFilter :
		public hknpCollisionFilter  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpPairCollisionFilter };
		inline static constexpr auto VTABLE{ VTABLE::hknpPairCollisionFilter };

		// members
		std::uint8_t unk10[0x8];                                              // 0x10
		hknpPairCollisionFilterMapPairFilterKeyOverrideType m_disabledPairs;  // 0x18
		hknpCollisionFilter* m_childFilter;                                   // 0x28
	};
	static_assert(sizeof(hknpPairCollisionFilter) == 0x30);
	static_assert(offsetof(hknpPairCollisionFilter, m_disabledPairs) == 0x18);
	static_assert(offsetof(hknpPairCollisionFilter, m_childFilter) == 0x28);
}
