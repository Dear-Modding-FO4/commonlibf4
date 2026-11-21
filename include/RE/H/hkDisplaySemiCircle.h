#pragma once

#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkDisplaySemiCircle :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplaySemiCircle };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplaySemiCircle };

		// members
		hkVector4f unk70;  // 0x70
		std::uint8_t unk80[0x2C];  // 0x80
		std::uint32_t unkAC;       // 0xAC
	};
	static_assert(sizeof(hkDisplaySemiCircle) == 0xB0);
	static_assert(offsetof(hkDisplaySemiCircle, unkAC) == 0xAC);
	static_assert(offsetof(hkDisplaySemiCircle, unk70) == 0x70);
	static_assert(offsetof(hkDisplaySemiCircle, unk80) == 0x80);
}
