#pragma once

#include "RE/H/hkThreadPool.h"

namespace RE
{
	class __declspec(novtable) bhkThreadPool :
		public hkThreadPool  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkThreadPool };
		inline static constexpr auto VTABLE{ VTABLE::bhkThreadPool };

		// members
		void* unk10;              // 0x10
		std::uint32_t unk18;      // 0x18
		std::uint8_t unk1C[0x4];  // 0x1C
		void* unk20;              // 0x20
		std::uint8_t unk28[0xC];  // 0x28
		std::uint32_t unk34;      // 0x34
	};
	static_assert(sizeof(bhkThreadPool) == 0x38);
	static_assert(offsetof(bhkThreadPool, unk10) == 0x10);
	static_assert(offsetof(bhkThreadPool, unk18) == 0x18);
	static_assert(offsetof(bhkThreadPool, unk20) == 0x20);
	static_assert(offsetof(bhkThreadPool, unk34) == 0x34);
}
