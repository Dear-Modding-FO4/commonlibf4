#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkbAnimationBindingWithTriggers :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAnimationBindingWithTriggers };
		inline static constexpr auto VTABLE{ VTABLE::hkbAnimationBindingWithTriggers };

		// members
		std::uint8_t unk10[0x8];  // 0x10
		hkArray<std::uint8_t> unk18;  // 0x18
		std::uint8_t unk28[0x8];  // 0x28
	};
	static_assert(sizeof(hkbAnimationBindingWithTriggers) == 0x30);
	static_assert(offsetof(hkbAnimationBindingWithTriggers, unk10) == 0x10);
	static_assert(offsetof(hkbAnimationBindingWithTriggers, unk18) == 0x18);
	static_assert(offsetof(hkbAnimationBindingWithTriggers, unk28) == 0x28);
}
