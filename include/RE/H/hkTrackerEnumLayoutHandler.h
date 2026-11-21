#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerEnumLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerEnumLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerEnumLayoutHandler };
	};
	static_assert(sizeof(hkTrackerEnumLayoutHandler) == 0x10);
}
