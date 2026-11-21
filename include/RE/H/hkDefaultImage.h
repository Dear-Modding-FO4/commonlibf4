#pragma once

#include "RE/H/hkImage.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkDefaultImage :
		public hkImage  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDefaultImage };
		inline static constexpr auto VTABLE{ VTABLE::hkDefaultImage };

		// members
		hkArray<std::uint8_t> unk10;  // 0x10
		std::uint32_t unk20;  // 0x20
		std::uint32_t unk24;  // 0x24
		void* unk28;          // 0x28
		std::uint32_t unk30;  // 0x30
		std::uint32_t unk34;  // 0x34
	};
	static_assert(sizeof(hkDefaultImage) == 0x38);
	static_assert(offsetof(hkDefaultImage, unk20) == 0x20);
	static_assert(offsetof(hkDefaultImage, unk24) == 0x24);
	static_assert(offsetof(hkDefaultImage, unk28) == 0x28);
	static_assert(offsetof(hkDefaultImage, unk30) == 0x30);
	static_assert(offsetof(hkDefaultImage, unk34) == 0x34);
	static_assert(offsetof(hkDefaultImage, unk10) == 0x10);
}
