#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkTrackerTypeTreeCache :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerTypeTreeCache };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerTypeTreeCache };

		// members
		std::uint8_t unk10[0x160];  // 0x10
	};
	static_assert(sizeof(hkTrackerTypeTreeCache) == 0x170);
}
