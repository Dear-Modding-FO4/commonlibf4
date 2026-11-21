#pragma once

#include "RE/H/hkBlockStreamAllocator.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkFixedBlockStreamAllocator :
		public hkBlockStreamAllocator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkFixedBlockStreamAllocator };
		inline static constexpr auto VTABLE{ VTABLE::hkFixedBlockStreamAllocator };

		// members
		std::uint8_t unk10[0x30];  // 0x10
		void* unk40;  // 0x40
		hkArray<std::uint8_t> unk48;  // 0x48
		std::uint32_t unk58;       // 0x58
		std::uint32_t unk5C;       // 0x5C
		std::uint8_t unk60[0x1];   // 0x60
		std::uint8_t unk61;        // 0x61
		std::uint8_t unk62[0xE];   // 0x62
	};
	static_assert(sizeof(hkFixedBlockStreamAllocator) == 0x70);
	static_assert(offsetof(hkFixedBlockStreamAllocator, unk58) == 0x58);
	static_assert(offsetof(hkFixedBlockStreamAllocator, unk5C) == 0x5C);
	static_assert(offsetof(hkFixedBlockStreamAllocator, unk61) == 0x61);
	static_assert(offsetof(hkFixedBlockStreamAllocator, unk48) == 0x48);
	static_assert(offsetof(hkFixedBlockStreamAllocator, unk10) == 0x10);
	static_assert(offsetof(hkFixedBlockStreamAllocator, unk40) == 0x40);
}
