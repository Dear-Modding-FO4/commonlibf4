#pragma once

#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkDisplayTaperedCapsule :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplayTaperedCapsule };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplayTaperedCapsule };

		// members
		hkVector4f unk70;  // 0x70
		std::uint8_t unk80[0x18];  // 0x80
		std::uint32_t unk98;       // 0x98
		std::uint32_t unk9C;       // 0x9C
	};
	static_assert(sizeof(hkDisplayTaperedCapsule) == 0xA0);
	static_assert(offsetof(hkDisplayTaperedCapsule, unk98) == 0x98);
	static_assert(offsetof(hkDisplayTaperedCapsule, unk9C) == 0x9C);
	static_assert(offsetof(hkDisplayTaperedCapsule, unk70) == 0x70);
	static_assert(offsetof(hkDisplayTaperedCapsule, unk80) == 0x80);
}
