#pragma once

#include "RE/H/hkbDockingTarget.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbLineDockingTarget :
		public hkbDockingTarget  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbLineDockingTarget };
		inline static constexpr auto VTABLE{ VTABLE::hkbLineDockingTarget };

		// members
		std::uint8_t unk10[0x10];  // 0x10
		hkVector4f unk20;  // 0x20
		std::uint8_t unk30[0x50];  // 0x30
	};
	static_assert(sizeof(hkbLineDockingTarget) == 0x80);
	static_assert(offsetof(hkbLineDockingTarget, unk10) == 0x10);
	static_assert(offsetof(hkbLineDockingTarget, unk20) == 0x20);
	static_assert(offsetof(hkbLineDockingTarget, unk30) == 0x30);
}
