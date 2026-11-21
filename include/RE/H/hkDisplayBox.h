#pragma once

#include "RE/H/hkDisplayGeometry.h"

namespace RE
{
	class __declspec(novtable) hkDisplayBox :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplayBox };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplayBox };

		// members
		std::uint32_t unk70;  // 0x70
		std::uint32_t unk74;  // 0x74
		std::uint32_t unk78;  // 0x78
	};
	static_assert(sizeof(hkDisplayBox) == 0x80);
	static_assert(offsetof(hkDisplayBox, unk70) == 0x70);
	static_assert(offsetof(hkDisplayBox, unk74) == 0x74);
	static_assert(offsetof(hkDisplayBox, unk78) == 0x78);
}
