#pragma once

#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkDisplayCapsule :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplayCapsule };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplayCapsule };

		// members
		hkVector4f unk70;  // 0x70
		std::uint8_t unk80[0x14];  // 0x80
		std::uint32_t unk94;       // 0x94
		std::uint32_t unk98;       // 0x98
	};
	static_assert(sizeof(hkDisplayCapsule) == 0xA0);
	static_assert(offsetof(hkDisplayCapsule, unk94) == 0x94);
	static_assert(offsetof(hkDisplayCapsule, unk98) == 0x98);
	static_assert(offsetof(hkDisplayCapsule, unk70) == 0x70);
	static_assert(offsetof(hkDisplayCapsule, unk80) == 0x80);
}
