#pragma once

#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkDisplayCylinder :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplayCylinder };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplayCylinder };

		// members
		hkVector4f unk70;  // 0x70
		std::uint8_t unk80[0x14];  // 0x80
		std::uint32_t unk94;       // 0x94
		std::uint32_t unk98;       // 0x98
	};
	static_assert(sizeof(hkDisplayCylinder) == 0xA0);
	static_assert(offsetof(hkDisplayCylinder, unk94) == 0x94);
	static_assert(offsetof(hkDisplayCylinder, unk98) == 0x98);
	static_assert(offsetof(hkDisplayCylinder, unk70) == 0x70);
	static_assert(offsetof(hkDisplayCylinder, unk80) == 0x80);
}
