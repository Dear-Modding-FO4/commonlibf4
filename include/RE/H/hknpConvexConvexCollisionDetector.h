#pragma once

#include "RE/H/hknpCollisionDetector.h"

namespace RE
{
	class __declspec(novtable) hknpConvexConvexCollisionDetector :
		public hknpCollisionDetector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpConvexConvexCollisionDetector };
		inline static constexpr auto VTABLE{ VTABLE::hknpConvexConvexCollisionDetector };
	};
	static_assert(sizeof(hknpConvexConvexCollisionDetector) == 0x10);
}
