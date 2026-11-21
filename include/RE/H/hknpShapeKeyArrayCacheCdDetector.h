#pragma once

#include "RE/H/hknpCollisionDetector.h"

namespace RE
{
	class __declspec(novtable) hknpShapeKeyArrayCacheCdDetector :
		public hknpCollisionDetector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpShapeKeyArrayCacheCdDetector };
		inline static constexpr auto VTABLE{ VTABLE::hknpShapeKeyArrayCacheCdDetector };
	};
	static_assert(sizeof(hknpShapeKeyArrayCacheCdDetector) == 0x10);
}
