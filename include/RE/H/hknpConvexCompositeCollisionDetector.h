#pragma once

#include "RE/H/hknpCompositeCollisionDetector.h"

namespace RE
{
	class __declspec(novtable) hknpConvexCompositeCollisionDetector :
		public hknpCompositeCollisionDetector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpConvexCompositeCollisionDetector };
		inline static constexpr auto VTABLE{ VTABLE::hknpConvexCompositeCollisionDetector };
	};
	static_assert(sizeof(hknpConvexCompositeCollisionDetector) == 0x10);
}
