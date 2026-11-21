#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbDockingDriver :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbDockingDriver };
		inline static constexpr auto VTABLE{ VTABLE::hkbDockingDriver };

		// members
		void* unk10;                // 0x10
		std::uint8_t unk18[0x108];  // 0x18
	};
	static_assert(sizeof(hkbDockingDriver) == 0x120);
	static_assert(offsetof(hkbDockingDriver, unk10) == 0x10);
}
