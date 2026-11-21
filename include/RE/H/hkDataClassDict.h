#pragma once

#include "RE/H/hkDataClassImpl.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkDataClassDict :
		public hkDataClassImpl  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataClassDict };
		inline static constexpr auto VTABLE{ VTABLE::hkDataClassDict };

		// members
		void* unk10;               // 0x10
		void* unk18;               // 0x18
		std::uint32_t unk20;       // 0x20
		std::uint8_t pad24[0x4];   // 0x24
		void* unk28;               // 0x28
		hkArray<std::uint8_t> unk30;  // 0x30
		hkArray<std::uint8_t> unk40;  // 0x40
		std::uint8_t unk50[0x10];  // 0x50
	};
	static_assert(sizeof(hkDataClassDict) == 0x60);
	static_assert(offsetof(hkDataClassDict, unk10) == 0x10);
	static_assert(offsetof(hkDataClassDict, unk18) == 0x18);
	static_assert(offsetof(hkDataClassDict, unk20) == 0x20);
	static_assert(offsetof(hkDataClassDict, unk28) == 0x28);
	static_assert(offsetof(hkDataClassDict, unk30) == 0x30);
	static_assert(offsetof(hkDataClassDict, unk40) == 0x40);
	static_assert(offsetof(hkDataClassDict, unk50) == 0x50);
}
