#pragma once

#include "RE/H/hknpCompositeCollisionDetector.h"

namespace RE
{
	class __declspec(novtable) hknpCompositeCompositeCollisionDetector :
		public hknpCompositeCollisionDetector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCompositeCompositeCollisionDetector };
		inline static constexpr auto VTABLE{ VTABLE::hknpCompositeCompositeCollisionDetector };
	};
	static_assert(sizeof(hknpCompositeCompositeCollisionDetector) == 0x10);
}
