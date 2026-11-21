#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkDefaultMemoryTracker :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDefaultMemoryTracker };
		inline static constexpr auto VTABLE{ VTABLE::hkDefaultMemoryTracker };

		// add
		virtual void Unk_04();  // 0x20 [04]
		virtual void Unk_05();  // 0x28 [05]
		virtual void Unk_06();  // 0x30 [06]
		virtual void Unk_07();  // 0x38 [07]
		virtual void Unk_08();  // 0x40 [08]
		virtual void Unk_09();  // 0x48 [09]
		virtual void Unk_0A();  // 0x50 [0A]
		virtual void Unk_0B();  // 0x58 [0B]

		// members
		void* unk10;  // 0x10
		std::uint32_t unk18;  // 0x18
		std::uint32_t unk1C;  // 0x1C
		void* unk20;  // 0x20
		std::uint32_t unk28;  // 0x28
		std::uint32_t unk2C;  // 0x2C
		std::uint8_t unk30[0x70];  // 0x30
		void* unkA0;  // 0xA0
		std::uint32_t unkA8;  // 0xA8
		std::uint32_t unkAC;  // 0xAC
		std::uint8_t unkB0[0x18];  // 0xB0
		void* unkC8;  // 0xC8
		std::uint8_t unkD0[0x28];  // 0xD0
	};
	static_assert(sizeof(hkDefaultMemoryTracker) == 0xF8);
	static_assert(offsetof(hkDefaultMemoryTracker, unk10) == 0x10);
	static_assert(offsetof(hkDefaultMemoryTracker, unk18) == 0x18);
	static_assert(offsetof(hkDefaultMemoryTracker, unk1C) == 0x1C);
	static_assert(offsetof(hkDefaultMemoryTracker, unk20) == 0x20);
	static_assert(offsetof(hkDefaultMemoryTracker, unk28) == 0x28);
	static_assert(offsetof(hkDefaultMemoryTracker, unk2C) == 0x2C);
	static_assert(offsetof(hkDefaultMemoryTracker, unk30) == 0x30);
	static_assert(offsetof(hkDefaultMemoryTracker, unkA0) == 0xA0);
	static_assert(offsetof(hkDefaultMemoryTracker, unkA8) == 0xA8);
	static_assert(offsetof(hkDefaultMemoryTracker, unkAC) == 0xAC);
	static_assert(offsetof(hkDefaultMemoryTracker, unkB0) == 0xB0);
	static_assert(offsetof(hkDefaultMemoryTracker, unkC8) == 0xC8);
	static_assert(offsetof(hkDefaultMemoryTracker, unkD0) == 0xD0);
}
