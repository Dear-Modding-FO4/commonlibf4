#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkbFootIkDriver :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbFootIkDriver };
		inline static constexpr auto VTABLE{ VTABLE::hkbFootIkDriver };

		// members
		hkArray<std::uint8_t> unk10;  // 0x10
		std::uint8_t unk20[0x60];  // 0x20
	};
	static_assert(sizeof(hkbFootIkDriver) == 0x80);
	static_assert(offsetof(hkbFootIkDriver, unk10) == 0x10);
	static_assert(offsetof(hkbFootIkDriver, unk20) == 0x20);
}
