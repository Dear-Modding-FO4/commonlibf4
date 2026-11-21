#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbDockingTarget :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbDockingTarget };
		inline static constexpr auto VTABLE{ VTABLE::hkbDockingTarget };
	};
	static_assert(sizeof(hkbDockingTarget) == 0x10);
}
