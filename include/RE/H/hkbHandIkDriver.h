#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkbHandIkDriver :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbHandIkDriver };
		inline static constexpr auto VTABLE{ VTABLE::hkbHandIkDriver };

		// members
		hkArray<std::uint8_t> unk10;  // 0x10
		std::uint8_t unk20[0x8];  // 0x20
	};
	static_assert(sizeof(hkbHandIkDriver) == 0x28);
	static_assert(offsetof(hkbHandIkDriver, unk10) == 0x10);
}
