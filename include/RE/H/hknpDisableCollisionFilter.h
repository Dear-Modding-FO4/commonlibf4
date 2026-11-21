#pragma once

#include "RE/H/hknpCollisionFilter.h"

namespace RE
{
	class __declspec(novtable) hknpDisableCollisionFilter :
		public hknpCollisionFilter  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpDisableCollisionFilter };
		inline static constexpr auto VTABLE{ VTABLE::hknpDisableCollisionFilter };

		// members
		std::uint8_t unk10[0x8];  // 0x10
	};
	static_assert(sizeof(hknpDisableCollisionFilter) == 0x18);
}
