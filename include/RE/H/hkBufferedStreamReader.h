#pragma once

#include "RE/H/hkSeekableStreamReader.h"

namespace RE
{
	class __declspec(novtable) hkBufferedStreamReader :
		public hkSeekableStreamReader  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkBufferedStreamReader };
		inline static constexpr auto VTABLE{ VTABLE::hkBufferedStreamReader };

		// members
		void* unk10;          // 0x10
		void* unk18;          // 0x18
		void* unk20;          // 0x20
		std::uint32_t unk28;  // 0x28
		std::uint32_t unk2C;  // 0x2C
		std::uint32_t unk30;  // 0x30
	};
	static_assert(sizeof(hkBufferedStreamReader) == 0x38);
	static_assert(offsetof(hkBufferedStreamReader, unk10) == 0x10);
	static_assert(offsetof(hkBufferedStreamReader, unk18) == 0x18);
	static_assert(offsetof(hkBufferedStreamReader, unk20) == 0x20);
	static_assert(offsetof(hkBufferedStreamReader, unk28) == 0x28);
	static_assert(offsetof(hkBufferedStreamReader, unk2C) == 0x2C);
	static_assert(offsetof(hkBufferedStreamReader, unk30) == 0x30);
}
