#pragma once

#include "RE/H/hkSecondaryCommandDispatcher.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hknpEventDispatcher :
		public hkSecondaryCommandDispatcher  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpEventDispatcher };
		inline static constexpr auto VTABLE{ VTABLE::hknpEventDispatcher };

		// members
		void* unk10;              // 0x10
		void* unk18;              // 0x18
		void* unk20;              // 0x20
		void* unk28;              // 0x28
		std::uint16_t unk30;  // 0x30
		std::uint8_t pad32[0x6];  // 0x32
		hkArray<std::uint8_t> unk38;  // 0x38
		hkArray<std::uint16_t> unk48;  // 0x48
	};
	static_assert(sizeof(hknpEventDispatcher) == 0x58);
	static_assert(offsetof(hknpEventDispatcher, unk10) == 0x10);
	static_assert(offsetof(hknpEventDispatcher, unk18) == 0x18);
	static_assert(offsetof(hknpEventDispatcher, unk20) == 0x20);
	static_assert(offsetof(hknpEventDispatcher, unk28) == 0x28);
	static_assert(offsetof(hknpEventDispatcher, unk38) == 0x38);
	static_assert(offsetof(hknpEventDispatcher, unk48) == 0x48);
	static_assert(offsetof(hknpEventDispatcher, unk30) == 0x30);
	static_assert(offsetof(hknpEventDispatcher, pad32) == 0x32);
}
