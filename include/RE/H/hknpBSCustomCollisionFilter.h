#pragma once

#include "RE/H/hknpCollisionFilter.h"

namespace RE
{
	class __declspec(novtable) hknpBSCustomCollisionFilter :
		public hknpCollisionFilter  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBSCustomCollisionFilter };
		inline static constexpr auto VTABLE{ VTABLE::hknpBSCustomCollisionFilter };

		// members
		void* unk10;  // 0x10
		void* unk18;              // 0x18
		std::uint32_t unk20;      // 0x20
		std::uint8_t unk24;       // 0x24
	};
	static_assert(sizeof(hknpBSCustomCollisionFilter) == 0x28);
	static_assert(offsetof(hknpBSCustomCollisionFilter, unk18) == 0x18);
	static_assert(offsetof(hknpBSCustomCollisionFilter, unk20) == 0x20);
	static_assert(offsetof(hknpBSCustomCollisionFilter, unk24) == 0x24);
	static_assert(offsetof(hknpBSCustomCollisionFilter, unk10) == 0x10);
}
