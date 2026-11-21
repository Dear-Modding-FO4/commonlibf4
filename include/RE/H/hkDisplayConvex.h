#pragma once

#include "RE/H/hkDisplayGeometry.h"

namespace RE
{
	class __declspec(novtable) hkDisplayConvex :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplayConvex };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplayConvex };
	};
	static_assert(sizeof(hkDisplayConvex) == 0x70);
}
