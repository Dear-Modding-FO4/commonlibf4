#pragma once

#include "RE/H/hknpCollisionDetector.h"

namespace RE
{
	class __declspec(novtable) hknpSetShapeKeyACdDetector :
		public hknpCollisionDetector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSetShapeKeyACdDetector };
		inline static constexpr auto VTABLE{ VTABLE::hknpSetShapeKeyACdDetector };
	};
	static_assert(sizeof(hknpSetShapeKeyACdDetector) == 0x10);
}
