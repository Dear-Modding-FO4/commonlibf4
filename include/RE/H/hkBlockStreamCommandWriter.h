#pragma once

#include "RE/H/hkSecondaryCommandDispatcher.h"

namespace RE
{
	class __declspec(novtable) hkBlockStreamCommandWriter :
		public hkSecondaryCommandDispatcher  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkBlockStreamCommandWriter };
		inline static constexpr auto VTABLE{ VTABLE::hkBlockStreamCommandWriter };

		// members
		void* unk10;  // 0x10
		std::uint8_t unk18[0x8];  // 0x18
		std::uint32_t unk20;       // 0x20
		std::uint32_t unk24;       // 0x24
		std::uint8_t unk28[0x10];  // 0x28
	};
	static_assert(sizeof(hkBlockStreamCommandWriter) == 0x38);
	static_assert(offsetof(hkBlockStreamCommandWriter, unk20) == 0x20);
	static_assert(offsetof(hkBlockStreamCommandWriter, unk24) == 0x24);
	static_assert(offsetof(hkBlockStreamCommandWriter, unk10) == 0x10);
	static_assert(offsetof(hkBlockStreamCommandWriter, unk18) == 0x18);
}
