#pragma once

#include "RE/H/hkMemoryAllocator.h"

namespace RE
{
	class __declspec(novtable) hkThreadMemory :
		public hkMemoryAllocator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkThreadMemory };
		inline static constexpr auto VTABLE{ VTABLE::hkThreadMemory };

		// add
		virtual void releaseCachedMemory();  // 0x60 [0C]

		// members
		hkMemoryAllocator* m_memory;                 // 0x08
		std::int32_t m_maxNumElemsOnFreeList;        // 0x10
		std::uint8_t pad14[0x4];  // 0x14
		void* unk18;  // 0x18
		std::uint32_t unk20;  // 0x20
		std::uint8_t pad24[0x4];  // 0x24
		void* unk28;  // 0x28
		std::uint32_t unk30;  // 0x30
		std::uint8_t pad34[0x4];  // 0x34
		void* unk38;  // 0x38
		std::uint32_t unk40;  // 0x40
		std::uint8_t pad44[0x4];  // 0x44
		void* unk48;  // 0x48
		std::uint32_t unk50;  // 0x50
		std::uint8_t pad54[0x4];  // 0x54
		void* unk58;  // 0x58
		std::uint32_t unk60;  // 0x60
		std::uint8_t pad64[0x4];  // 0x64
		void* unk68;  // 0x68
		std::uint32_t unk70;  // 0x70
		std::uint8_t pad74[0x4];  // 0x74
		void* unk78;  // 0x78
		std::uint32_t unk80;  // 0x80
		std::uint8_t pad84[0x4];  // 0x84
		void* unk88;  // 0x88
		std::uint32_t unk90;  // 0x90
		std::uint8_t pad94[0x4];  // 0x94
		void* unk98;  // 0x98
		std::uint32_t unkA0;  // 0xA0
		std::uint8_t padA4[0x4];  // 0xA4
		void* unkA8;  // 0xA8
		std::uint32_t unkB0;  // 0xB0
		std::uint8_t padB4[0x4];  // 0xB4
		void* unkB8;  // 0xB8
		std::uint32_t unkC0;  // 0xC0
		std::uint8_t padC4[0x4];  // 0xC4
		void* unkC8;  // 0xC8
		std::uint32_t unkD0;  // 0xD0
		std::uint8_t padD4[0x4];  // 0xD4
		void* unkD8;  // 0xD8
		std::uint32_t unkE0;  // 0xE0
		std::uint8_t unkE4[0x4];  // 0xE4
		void* unkE8;  // 0xE8
		std::uint32_t unkF0;  // 0xF0
		std::uint8_t padF4[0x4];  // 0xF4
		void* unkF8;  // 0xF8
		std::uint32_t unk100;  // 0x100
		std::uint8_t pad104[0x4];  // 0x104
		void* unk108;  // 0x108
		std::uint32_t unk110;  // 0x110
		std::uint8_t pad114[0x4];  // 0x114
		void* unk118;  // 0x118
		std::uint32_t unk120;  // 0x120
		std::uint8_t unk124[0x94];  // 0x124
	};
	static_assert(sizeof(hkThreadMemory) == 0x1B8);
	static_assert(offsetof(hkThreadMemory, m_memory) == 0x8);
	static_assert(offsetof(hkThreadMemory, m_maxNumElemsOnFreeList) == 0x10);
	static_assert(offsetof(hkThreadMemory, pad14) == 0x14);
	static_assert(offsetof(hkThreadMemory, unk18) == 0x18);
	static_assert(offsetof(hkThreadMemory, unk20) == 0x20);
	static_assert(offsetof(hkThreadMemory, pad24) == 0x24);
	static_assert(offsetof(hkThreadMemory, unk28) == 0x28);
	static_assert(offsetof(hkThreadMemory, unk30) == 0x30);
	static_assert(offsetof(hkThreadMemory, pad34) == 0x34);
	static_assert(offsetof(hkThreadMemory, unk38) == 0x38);
	static_assert(offsetof(hkThreadMemory, unk40) == 0x40);
	static_assert(offsetof(hkThreadMemory, pad44) == 0x44);
	static_assert(offsetof(hkThreadMemory, unk48) == 0x48);
	static_assert(offsetof(hkThreadMemory, unk50) == 0x50);
	static_assert(offsetof(hkThreadMemory, pad54) == 0x54);
	static_assert(offsetof(hkThreadMemory, unk58) == 0x58);
	static_assert(offsetof(hkThreadMemory, unk60) == 0x60);
	static_assert(offsetof(hkThreadMemory, pad64) == 0x64);
	static_assert(offsetof(hkThreadMemory, unk68) == 0x68);
	static_assert(offsetof(hkThreadMemory, unk70) == 0x70);
	static_assert(offsetof(hkThreadMemory, pad74) == 0x74);
	static_assert(offsetof(hkThreadMemory, unk78) == 0x78);
	static_assert(offsetof(hkThreadMemory, unk80) == 0x80);
	static_assert(offsetof(hkThreadMemory, pad84) == 0x84);
	static_assert(offsetof(hkThreadMemory, unk88) == 0x88);
	static_assert(offsetof(hkThreadMemory, unk90) == 0x90);
	static_assert(offsetof(hkThreadMemory, pad94) == 0x94);
	static_assert(offsetof(hkThreadMemory, unk98) == 0x98);
	static_assert(offsetof(hkThreadMemory, unkA0) == 0xA0);
	static_assert(offsetof(hkThreadMemory, padA4) == 0xA4);
	static_assert(offsetof(hkThreadMemory, unkA8) == 0xA8);
	static_assert(offsetof(hkThreadMemory, unkB0) == 0xB0);
	static_assert(offsetof(hkThreadMemory, padB4) == 0xB4);
	static_assert(offsetof(hkThreadMemory, unkB8) == 0xB8);
	static_assert(offsetof(hkThreadMemory, unkC0) == 0xC0);
	static_assert(offsetof(hkThreadMemory, padC4) == 0xC4);
	static_assert(offsetof(hkThreadMemory, unkC8) == 0xC8);
	static_assert(offsetof(hkThreadMemory, unkD0) == 0xD0);
	static_assert(offsetof(hkThreadMemory, padD4) == 0xD4);
	static_assert(offsetof(hkThreadMemory, unkD8) == 0xD8);
	static_assert(offsetof(hkThreadMemory, unkE0) == 0xE0);
	static_assert(offsetof(hkThreadMemory, unkE4) == 0xE4);
	static_assert(offsetof(hkThreadMemory, unkE8) == 0xE8);
	static_assert(offsetof(hkThreadMemory, unkF0) == 0xF0);
	static_assert(offsetof(hkThreadMemory, padF4) == 0xF4);
	static_assert(offsetof(hkThreadMemory, unkF8) == 0xF8);
	static_assert(offsetof(hkThreadMemory, unk100) == 0x100);
	static_assert(offsetof(hkThreadMemory, pad104) == 0x104);
	static_assert(offsetof(hkThreadMemory, unk108) == 0x108);
	static_assert(offsetof(hkThreadMemory, unk110) == 0x110);
	static_assert(offsetof(hkThreadMemory, pad114) == 0x114);
	static_assert(offsetof(hkThreadMemory, unk118) == 0x118);
	static_assert(offsetof(hkThreadMemory, unk120) == 0x120);
	static_assert(offsetof(hkThreadMemory, unk124) == 0x124);
}
