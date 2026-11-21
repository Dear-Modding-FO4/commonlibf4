#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkTaskQueue :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTaskQueue };
		inline static constexpr auto VTABLE{ VTABLE::hkTaskQueue };

		// members
		void* unk10;               // 0x10
		std::uint32_t unk18;       // 0x18
		std::uint32_t unk1C;       // 0x1C
		std::uint8_t unk20[0x48];  // 0x20
		hkArray<std::uint8_t> unk68;  // 0x68
		hkArray<std::uint8_t> unk78;  // 0x78
		std::uint8_t unk88[0x28];  // 0x88
		void* unkB0;               // 0xB0
		std::uint32_t unkB8;  // 0xB8
		std::uint8_t padBC[0x4];  // 0xBC
		void* unkC0;  // 0xC0
		std::uint8_t unkC8[0x18];  // 0xC8
	};
	static_assert(sizeof(hkTaskQueue) == 0xE0);
	static_assert(offsetof(hkTaskQueue, unk10) == 0x10);
	static_assert(offsetof(hkTaskQueue, unk18) == 0x18);
	static_assert(offsetof(hkTaskQueue, unk1C) == 0x1C);
	static_assert(offsetof(hkTaskQueue, unkB0) == 0xB0);
	static_assert(offsetof(hkTaskQueue, unk20) == 0x20);
	static_assert(offsetof(hkTaskQueue, unk68) == 0x68);
	static_assert(offsetof(hkTaskQueue, unk78) == 0x78);
	static_assert(offsetof(hkTaskQueue, unkB8) == 0xB8);
	static_assert(offsetof(hkTaskQueue, padBC) == 0xBC);
	static_assert(offsetof(hkTaskQueue, unkC0) == 0xC0);
	static_assert(offsetof(hkTaskQueue, unkC8) == 0xC8);
}
