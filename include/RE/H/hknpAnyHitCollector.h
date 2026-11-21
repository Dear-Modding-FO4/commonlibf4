#pragma once

#include "RE/H/hknpClosestHitCollector.h"

namespace RE
{
	class __declspec(novtable) hknpAnyHitCollector :
		public hknpClosestHitCollector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpAnyHitCollector };
		inline static constexpr auto VTABLE{ VTABLE::hknpAnyHitCollector };
	};
	static_assert(sizeof(hknpAnyHitCollector) == 0x90);
}
