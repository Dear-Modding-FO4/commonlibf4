#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkTrackerTypeLayout :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerTypeLayout };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerTypeLayout };

		// members
		std::uint8_t unk10[0x8];  // 0x10
		void* unk18;              // 0x18
		std::uint32_t unk20;      // 0x20
		std::uint32_t unk24;      // 0x24
		void* unk28;              // 0x28
		std::uint32_t unk30;      // 0x30
		std::uint32_t unk34;      // 0x34
		std::uint8_t unk38[0x8];  // 0x38
	};
	static_assert(sizeof(hkTrackerTypeLayout) == 0x40);
	static_assert(offsetof(hkTrackerTypeLayout, unk18) == 0x18);
	static_assert(offsetof(hkTrackerTypeLayout, unk20) == 0x20);
	static_assert(offsetof(hkTrackerTypeLayout, unk24) == 0x24);
	static_assert(offsetof(hkTrackerTypeLayout, unk28) == 0x28);
	static_assert(offsetof(hkTrackerTypeLayout, unk30) == 0x30);
	static_assert(offsetof(hkTrackerTypeLayout, unk34) == 0x34);
}
