#pragma once

#include "RE/H/hknpCollisionDetector.h"

namespace RE
{
	class __declspec(novtable) hknpTriggerCollisionDetector :
		public hknpCollisionDetector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpTriggerCollisionDetector };
		inline static constexpr auto VTABLE{ VTABLE::hknpTriggerCollisionDetector };
	};
	static_assert(sizeof(hknpTriggerCollisionDetector) == 0x10);
}
