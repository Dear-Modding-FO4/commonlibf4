#pragma once

#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkDisplaySphere :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplaySphere };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplaySphere };

		// members
		hkVector4f unk70;  // 0x70
		std::uint8_t unk80[0x10];  // 0x80
	};
	static_assert(sizeof(hkDisplaySphere) == 0x90);
	static_assert(offsetof(hkDisplaySphere, unk70) == 0x70);
	static_assert(offsetof(hkDisplaySphere, unk80) == 0x80);
}
