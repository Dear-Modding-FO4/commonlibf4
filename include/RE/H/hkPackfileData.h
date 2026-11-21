#pragma once

#include "RE/H/hkResource.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkPackfileData :
		public hkResource  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkPackfileData };
		inline static constexpr auto VTABLE{ VTABLE::hkPackfileData };

		// members
		void* unk10;               // 0x10
		void* unk18;               // 0x18
		void* unk20;               // 0x20
		std::uint32_t unk28;  // 0x28
		std::uint32_t unk2C;       // 0x2C
		std::uint8_t unk30[0x8];   // 0x30
		std::uint32_t unk38;       // 0x38
		std::uint8_t unk3C[0xC];   // 0x3C
		void* unk48;               // 0x48
		std::uint32_t unk50;       // 0x50
		std::uint8_t pad54[0x4];  // 0x54
		hkArray<std::uint8_t> unk58;  // 0x58
		std::uint8_t unk68[0x10];  // 0x68
		hkArray<std::uint8_t> unk78;  // 0x78
		hkArray<std::uint8_t> unk88;  // 0x88
		void* unk98;               // 0x98
		std::uint32_t unkA0;       // 0xA0
	};
	static_assert(sizeof(hkPackfileData) == 0xA8);
	static_assert(offsetof(hkPackfileData, unk10) == 0x10);
	static_assert(offsetof(hkPackfileData, unk18) == 0x18);
	static_assert(offsetof(hkPackfileData, unk20) == 0x20);
	static_assert(offsetof(hkPackfileData, unk2C) == 0x2C);
	static_assert(offsetof(hkPackfileData, unk38) == 0x38);
	static_assert(offsetof(hkPackfileData, unk48) == 0x48);
	static_assert(offsetof(hkPackfileData, unk50) == 0x50);
	static_assert(offsetof(hkPackfileData, unk98) == 0x98);
	static_assert(offsetof(hkPackfileData, unkA0) == 0xA0);
	static_assert(offsetof(hkPackfileData, pad54) == 0x54);
	static_assert(offsetof(hkPackfileData, unk58) == 0x58);
	static_assert(offsetof(hkPackfileData, unk68) == 0x68);
	static_assert(offsetof(hkPackfileData, unk78) == 0x78);
	static_assert(offsetof(hkPackfileData, unk88) == 0x88);
	static_assert(offsetof(hkPackfileData, unk28) == 0x28);
}
