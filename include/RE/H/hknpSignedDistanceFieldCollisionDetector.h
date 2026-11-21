#pragma once

#include "RE/H/hknpCompositeCollisionDetector.h"

namespace RE
{
	class __declspec(novtable) hknpSignedDistanceFieldCollisionDetector :
		public hknpCompositeCollisionDetector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSignedDistanceFieldCollisionDetector };
		inline static constexpr auto VTABLE{ VTABLE::hknpSignedDistanceFieldCollisionDetector };
	};
	static_assert(sizeof(hknpSignedDistanceFieldCollisionDetector) == 0x10);
}
