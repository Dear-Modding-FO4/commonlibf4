#pragma once

#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkDisplayCone :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplayCone };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplayCone };

		// members
		hkVector4f unk70;  // 0x70
		std::uint8_t unk80[0x10];  // 0x80
		std::uint32_t unk90;       // 0x90
		std::uint32_t unk94;  // 0x94
		std::uint32_t unk98;  // 0x98
		std::uint8_t pad9C[0x4];  // 0x9C
	};
	static_assert(sizeof(hkDisplayCone) == 0xA0);
	static_assert(offsetof(hkDisplayCone, unk90) == 0x90);
	static_assert(offsetof(hkDisplayCone, unk70) == 0x70);
	static_assert(offsetof(hkDisplayCone, unk80) == 0x80);
	static_assert(offsetof(hkDisplayCone, unk94) == 0x94);
	static_assert(offsetof(hkDisplayCone, unk98) == 0x98);
	static_assert(offsetof(hkDisplayCone, pad9C) == 0x9C);
}
