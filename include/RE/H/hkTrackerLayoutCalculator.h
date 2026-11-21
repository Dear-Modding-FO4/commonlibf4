#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkTrackerLayoutCalculator :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerLayoutCalculator };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerLayoutCalculator };

		// members
		void* unk10;  // 0x10
		std::uint32_t unk18;  // 0x18
		std::uint32_t unk1C;  // 0x1C
		void* unk20;  // 0x20
		std::uint32_t unk28;  // 0x28
		std::uint32_t unk2C;  // 0x2C
		void* unk30;  // 0x30
		std::uint8_t unk38[0x18];  // 0x38
		void* unk50;  // 0x50
		std::uint32_t unk58;  // 0x58
		std::uint32_t unk5C;  // 0x5C
	};
	static_assert(sizeof(hkTrackerLayoutCalculator) == 0x60);
	static_assert(offsetof(hkTrackerLayoutCalculator, unk10) == 0x10);
	static_assert(offsetof(hkTrackerLayoutCalculator, unk18) == 0x18);
	static_assert(offsetof(hkTrackerLayoutCalculator, unk1C) == 0x1C);
	static_assert(offsetof(hkTrackerLayoutCalculator, unk20) == 0x20);
	static_assert(offsetof(hkTrackerLayoutCalculator, unk28) == 0x28);
	static_assert(offsetof(hkTrackerLayoutCalculator, unk2C) == 0x2C);
	static_assert(offsetof(hkTrackerLayoutCalculator, unk30) == 0x30);
	static_assert(offsetof(hkTrackerLayoutCalculator, unk38) == 0x38);
	static_assert(offsetof(hkTrackerLayoutCalculator, unk50) == 0x50);
	static_assert(offsetof(hkTrackerLayoutCalculator, unk58) == 0x58);
	static_assert(offsetof(hkTrackerLayoutCalculator, unk5C) == 0x5C);
}
