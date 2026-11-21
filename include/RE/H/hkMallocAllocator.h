#pragma once

#include "RE/H/hkMemoryAllocator.h"

namespace RE
{
	class __declspec(novtable) hkMallocAllocator :
		public hkMemoryAllocator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMallocAllocator };
		inline static constexpr auto VTABLE{ VTABLE::hkMallocAllocator };

		// members
		std::uint32_t unk8;   // 0x08
		std::uint32_t unkC;   // 0x0C
		std::uint32_t unk10;  // 0x10
	};
	static_assert(sizeof(hkMallocAllocator) == 0x18);
	static_assert(offsetof(hkMallocAllocator, unk8) == 0x8);
	static_assert(offsetof(hkMallocAllocator, unkC) == 0xC);
	static_assert(offsetof(hkMallocAllocator, unk10) == 0x10);
}
