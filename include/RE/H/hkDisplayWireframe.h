#pragma once

#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkDisplayWireframe :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplayWireframe };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplayWireframe };

		// members
		hkArray<std::uint8_t> unk70;  // 0x70
	};
	static_assert(sizeof(hkDisplayWireframe) == 0x80);
	static_assert(offsetof(hkDisplayWireframe, unk70) == 0x70);
}
