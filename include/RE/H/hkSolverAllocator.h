#pragma once

#include "RE/H/hkMemoryAllocator.h"

namespace RE
{
	class __declspec(novtable) hkSolverAllocator :
		public hkMemoryAllocator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkSolverAllocator };
		inline static constexpr auto VTABLE{ VTABLE::hkSolverAllocator };

		// members
		void* unk8;  // 0x8
		void* unk10;  // 0x10
		void* unk18;                // 0x18
		std::uint32_t unk20;        // 0x20
		std::uint8_t pad24[0x4];  // 0x24
		void* unk28;  // 0x28
		void* unk30;                // 0x30
		std::uint32_t unk38;        // 0x38
		std::uint32_t unk3C;  // 0x3C
		std::uint8_t unk40[0x428];  // 0x40
	};
	static_assert(sizeof(hkSolverAllocator) == 0x468);
	static_assert(offsetof(hkSolverAllocator, unk18) == 0x18);
	static_assert(offsetof(hkSolverAllocator, unk20) == 0x20);
	static_assert(offsetof(hkSolverAllocator, unk30) == 0x30);
	static_assert(offsetof(hkSolverAllocator, unk38) == 0x38);
	static_assert(offsetof(hkSolverAllocator, unk8) == 0x8);
	static_assert(offsetof(hkSolverAllocator, unk10) == 0x10);
	static_assert(offsetof(hkSolverAllocator, pad24) == 0x24);
	static_assert(offsetof(hkSolverAllocator, unk28) == 0x28);
	static_assert(offsetof(hkSolverAllocator, unk3C) == 0x3C);
	static_assert(offsetof(hkSolverAllocator, unk40) == 0x40);
}
