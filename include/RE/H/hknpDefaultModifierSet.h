#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpDefaultModifierSet :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpDefaultModifierSet };
		inline static constexpr auto VTABLE{ VTABLE::hknpDefaultModifierSet };

		// members
		void* unk10;              // 0x10
		void* unk18;              // 0x18
		void* unk20;              // 0x20
		void* unk28;              // 0x28
		void* unk30;              // 0x30
		void* unk38;              // 0x38
		void* unk40;              // 0x40
		void* unk48;              // 0x48
		void* unk50;              // 0x50
		void* unk58;              // 0x58
		void* unk60;              // 0x60
		void* unk68;              // 0x68
		void* unk70;              // 0x70
		void* unk78;              // 0x78
		std::uint8_t unk80[0x8];  // 0x80
		void* unk88;              // 0x88
		std::uint8_t unk90[0x8];  // 0x90
		void* unk98;              // 0x98
		std::uint8_t unkA0[0x8];  // 0xA0
		void* unkA8;              // 0xA8
		std::uint8_t unkB0[0x8];  // 0xB0
		void* unkB8;              // 0xB8
		std::uint8_t unkC0[0x8];  // 0xC0
		void* unkC8;              // 0xC8
		std::uint8_t unkD0[0x8];  // 0xD0
		void* unkD8;              // 0xD8
		std::uint8_t unkE0[0x8];  // 0xE0
	};
	static_assert(sizeof(hknpDefaultModifierSet) == 0xE8);
	static_assert(offsetof(hknpDefaultModifierSet, unk10) == 0x10);
	static_assert(offsetof(hknpDefaultModifierSet, unk18) == 0x18);
	static_assert(offsetof(hknpDefaultModifierSet, unk20) == 0x20);
	static_assert(offsetof(hknpDefaultModifierSet, unk28) == 0x28);
	static_assert(offsetof(hknpDefaultModifierSet, unk30) == 0x30);
	static_assert(offsetof(hknpDefaultModifierSet, unk38) == 0x38);
	static_assert(offsetof(hknpDefaultModifierSet, unk40) == 0x40);
	static_assert(offsetof(hknpDefaultModifierSet, unk48) == 0x48);
	static_assert(offsetof(hknpDefaultModifierSet, unk50) == 0x50);
	static_assert(offsetof(hknpDefaultModifierSet, unk58) == 0x58);
	static_assert(offsetof(hknpDefaultModifierSet, unk60) == 0x60);
	static_assert(offsetof(hknpDefaultModifierSet, unk68) == 0x68);
	static_assert(offsetof(hknpDefaultModifierSet, unk70) == 0x70);
	static_assert(offsetof(hknpDefaultModifierSet, unk78) == 0x78);
	static_assert(offsetof(hknpDefaultModifierSet, unk88) == 0x88);
	static_assert(offsetof(hknpDefaultModifierSet, unk98) == 0x98);
	static_assert(offsetof(hknpDefaultModifierSet, unkA8) == 0xA8);
	static_assert(offsetof(hknpDefaultModifierSet, unkB8) == 0xB8);
	static_assert(offsetof(hknpDefaultModifierSet, unkC8) == 0xC8);
	static_assert(offsetof(hknpDefaultModifierSet, unkD8) == 0xD8);
}
