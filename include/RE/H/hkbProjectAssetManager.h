#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbProjectAssetManager :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbProjectAssetManager };
		inline static constexpr auto VTABLE{ VTABLE::hkbProjectAssetManager };

		// members
		std::uint8_t unk10[0x48];  // 0x10
		void* unk58;  // 0x58
		std::uint32_t unk60;  // 0x60
		std::uint32_t unk64;  // 0x64
		void* unk68;  // 0x68
		void* unk70;  // 0x70
		void* unk78;  // 0x78
		std::uint32_t unk80;  // 0x80
		std::uint32_t unk84;  // 0x84
		std::uint8_t unk88[0x20];  // 0x88
		void* unkA8;  // 0xA8
	};
	static_assert(sizeof(hkbProjectAssetManager) == 0xB0);
	static_assert(offsetof(hkbProjectAssetManager, unk10) == 0x10);
	static_assert(offsetof(hkbProjectAssetManager, unk58) == 0x58);
	static_assert(offsetof(hkbProjectAssetManager, unk60) == 0x60);
	static_assert(offsetof(hkbProjectAssetManager, unk64) == 0x64);
	static_assert(offsetof(hkbProjectAssetManager, unk68) == 0x68);
	static_assert(offsetof(hkbProjectAssetManager, unk70) == 0x70);
	static_assert(offsetof(hkbProjectAssetManager, unk78) == 0x78);
	static_assert(offsetof(hkbProjectAssetManager, unk80) == 0x80);
	static_assert(offsetof(hkbProjectAssetManager, unk84) == 0x84);
	static_assert(offsetof(hkbProjectAssetManager, unk88) == 0x88);
	static_assert(offsetof(hkbProjectAssetManager, unkA8) == 0xA8);
}
