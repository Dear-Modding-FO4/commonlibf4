#pragma once

#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkDisplayPlane :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplayPlane };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplayPlane };

		// members
		hkVector4f unk70;  // 0x70
		std::uint8_t unk80[0x30];  // 0x80
	};
	static_assert(sizeof(hkDisplayPlane) == 0xB0);
	static_assert(offsetof(hkDisplayPlane, unk70) == 0x70);
	static_assert(offsetof(hkDisplayPlane, unk80) == 0x80);
}
