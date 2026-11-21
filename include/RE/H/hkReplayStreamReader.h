#pragma once

#include "RE/H/hkStreamReader.h"

namespace RE
{
	class __declspec(novtable) hkReplayStreamReader :
		public hkStreamReader  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkReplayStreamReader };
		inline static constexpr auto VTABLE{ VTABLE::hkReplayStreamReader };

		// members
		void* unk10;              // 0x10
		std::uint32_t unk18;      // 0x18
		std::uint8_t pad1C[0x4];  // 0x1C
		void* unk20;              // 0x20
		std::uint32_t unk28;      // 0x28
		std::uint32_t unk2C;      // 0x2C
	};
	static_assert(sizeof(hkReplayStreamReader) == 0x30);
	static_assert(offsetof(hkReplayStreamReader, unk10) == 0x10);
	static_assert(offsetof(hkReplayStreamReader, unk18) == 0x18);
	static_assert(offsetof(hkReplayStreamReader, unk20) == 0x20);
	static_assert(offsetof(hkReplayStreamReader, unk28) == 0x28);
	static_assert(offsetof(hkReplayStreamReader, unk2C) == 0x2C);
}
