#pragma once

#include "RE/H/hknpCollisionDetector.h"

namespace RE
{
	class __declspec(novtable) hknpCompositeCollisionDetector :
		public hknpCollisionDetector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCompositeCollisionDetector };
		inline static constexpr auto VTABLE{ VTABLE::hknpCompositeCollisionDetector };
	};
	static_assert(sizeof(hknpCompositeCollisionDetector) == 0x10);
}
