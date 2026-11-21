#pragma once

#include "RE/H/hknpSpaceSplitter.h"

namespace RE
{
	class __declspec(novtable) hknpDynamicSpaceSplitter :
		public hknpSpaceSplitter  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpDynamicSpaceSplitter };
		inline static constexpr auto VTABLE{ VTABLE::hknpDynamicSpaceSplitter };

		// members
		std::uint32_t unk28;  // 0x28
		std::uint8_t unk2C[0x144];  // 0x2C
	};
	static_assert(sizeof(hknpDynamicSpaceSplitter) == 0x170);
	static_assert(offsetof(hknpDynamicSpaceSplitter, unk28) == 0x28);
	static_assert(offsetof(hknpDynamicSpaceSplitter, unk2C) == 0x2C);
}
