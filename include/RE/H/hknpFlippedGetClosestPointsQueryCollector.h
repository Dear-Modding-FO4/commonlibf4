#pragma once

#include "RE/H/hknpCollisionQueryCollector.h"

namespace RE
{
	class __declspec(novtable) hknpFlippedGetClosestPointsQueryCollector :
		public hknpCollisionQueryCollector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpFlippedGetClosestPointsQueryCollector };
		inline static constexpr auto VTABLE{ VTABLE::hknpFlippedGetClosestPointsQueryCollector };

		// members
		void* unk20;              // 0x20
		std::uint8_t unk28[0x8];  // 0x28
	};
	static_assert(sizeof(hknpFlippedGetClosestPointsQueryCollector) == 0x30);
	static_assert(offsetof(hknpFlippedGetClosestPointsQueryCollector, unk20) == 0x20);
}
