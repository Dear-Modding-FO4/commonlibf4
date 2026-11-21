#pragma once

#include "RE/H/hknpCollisionQueryCollector.h"

namespace RE
{
	class __declspec(novtable) hknpFlippedShapeCastQueryCollector :
		public hknpCollisionQueryCollector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpFlippedShapeCastQueryCollector };
		inline static constexpr auto VTABLE{ VTABLE::hknpFlippedShapeCastQueryCollector };

		// members
		std::uint8_t unk20[0x10];  // 0x20
		void* unk30;               // 0x30
		std::uint8_t unk38[0x8];   // 0x38
	};
	static_assert(sizeof(hknpFlippedShapeCastQueryCollector) == 0x40);
	static_assert(offsetof(hknpFlippedShapeCastQueryCollector, unk30) == 0x30);
}
