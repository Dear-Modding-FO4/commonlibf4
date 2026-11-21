#pragma once

#include "RE/H/hkbDockingTarget.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbPlaneDockingTarget :
		public hkbDockingTarget  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbPlaneDockingTarget };
		inline static constexpr auto VTABLE{ VTABLE::hkbPlaneDockingTarget };

		// members
		std::uint8_t unk10[0x10];  // 0x10
		hkVector4f unk20;  // 0x20
	};
	static_assert(sizeof(hkbPlaneDockingTarget) == 0x30);
	static_assert(offsetof(hkbPlaneDockingTarget, unk10) == 0x10);
	static_assert(offsetof(hkbPlaneDockingTarget, unk20) == 0x20);
}
