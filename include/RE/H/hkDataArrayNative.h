#pragma once

#include "RE/H/hkDataArrayImpl.h"

namespace RE
{
	class __declspec(novtable) hkDataArrayNative :
		public hkDataArrayImpl  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataArrayNative };
		inline static constexpr auto VTABLE{ VTABLE::hkDataArrayNative };

		// members
		void* unk10;              // 0x10
		void* unk18;              // 0x18
		std::uint32_t unk20;      // 0x20
		std::uint32_t unk24;      // 0x24
		std::uint32_t unk28;      // 0x28
		std::uint32_t unk2C;      // 0x2C
		void* unk30;              // 0x30
		void* unk38;              // 0x38
		std::uint32_t unk40;      // 0x40
		std::uint8_t pad44[0x4];  // 0x44
		void* unk48;              // 0x48
	};
	static_assert(sizeof(hkDataArrayNative) == 0x50);
	static_assert(offsetof(hkDataArrayNative, unk10) == 0x10);
	static_assert(offsetof(hkDataArrayNative, unk18) == 0x18);
	static_assert(offsetof(hkDataArrayNative, unk20) == 0x20);
	static_assert(offsetof(hkDataArrayNative, unk24) == 0x24);
	static_assert(offsetof(hkDataArrayNative, unk28) == 0x28);
	static_assert(offsetof(hkDataArrayNative, unk2C) == 0x2C);
	static_assert(offsetof(hkDataArrayNative, unk30) == 0x30);
	static_assert(offsetof(hkDataArrayNative, unk38) == 0x38);
	static_assert(offsetof(hkDataArrayNative, unk40) == 0x40);
	static_assert(offsetof(hkDataArrayNative, unk48) == 0x48);
}
