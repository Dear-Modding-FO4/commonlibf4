#pragma once

#include "RE/H/hknpCollisionQueryCollector.h"

namespace RE
{
	class __declspec(novtable) hknpFixedClosestHitCollector :
		public hknpCollisionQueryCollector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpFixedClosestHitCollector };
		inline static constexpr auto VTABLE{ VTABLE::hknpFixedClosestHitCollector };

		// members
		void* unk20;              // 0x20
		std::uint32_t unk28;      // 0x28
		std::uint32_t unk2C;      // 0x2C
		std::uint32_t unk30;      // 0x30
		std::uint8_t unk34[0xC];  // 0x34
	};
	static_assert(sizeof(hknpFixedClosestHitCollector) == 0x40);
	static_assert(offsetof(hknpFixedClosestHitCollector, unk20) == 0x20);
	static_assert(offsetof(hknpFixedClosestHitCollector, unk28) == 0x28);
	static_assert(offsetof(hknpFixedClosestHitCollector, unk2C) == 0x2C);
	static_assert(offsetof(hknpFixedClosestHitCollector, unk30) == 0x30);
}
