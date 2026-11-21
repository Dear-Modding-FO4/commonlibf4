#pragma once

#include "RE/H/hknpPairCollisionFilter.h"

namespace RE
{
	class __declspec(novtable) hknpConstraintCollisionFilter :
		public hknpPairCollisionFilter  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpConstraintCollisionFilter };
		inline static constexpr auto VTABLE{ VTABLE::hknpConstraintCollisionFilter };

		// members
		void* m_subscribedWorld;  // 0x30
	};
	static_assert(sizeof(hknpConstraintCollisionFilter) == 0x38);
	static_assert(offsetof(hknpConstraintCollisionFilter, m_subscribedWorld) == 0x30);
}
