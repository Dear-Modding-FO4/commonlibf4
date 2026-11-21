#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkTrackerScanSnapshot :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerScanSnapshot };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerScanSnapshot };

		// members
		hkArray<std::uint8_t> unk10;  // 0x10
		std::uint8_t unk20[0x138];  // 0x20
	};
	static_assert(sizeof(hkTrackerScanSnapshot) == 0x158);
	static_assert(offsetof(hkTrackerScanSnapshot, unk10) == 0x10);
	static_assert(offsetof(hkTrackerScanSnapshot, unk20) == 0x20);
}
