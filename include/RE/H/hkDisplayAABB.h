#pragma once

#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkDisplayAABB :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplayAABB };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplayAABB };

		// members
		hkVector4f unk70;  // 0x70
		std::uint32_t unk80;      // 0x80
		std::uint32_t unk84;      // 0x84
		std::uint32_t unk88;      // 0x88
	};
	static_assert(sizeof(hkDisplayAABB) == 0x90);
	static_assert(offsetof(hkDisplayAABB, unk80) == 0x80);
	static_assert(offsetof(hkDisplayAABB, unk84) == 0x84);
	static_assert(offsetof(hkDisplayAABB, unk88) == 0x88);
	static_assert(offsetof(hkDisplayAABB, unk70) == 0x70);
}
