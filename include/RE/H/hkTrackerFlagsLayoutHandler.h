#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerFlagsLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerFlagsLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerFlagsLayoutHandler };
	};
	static_assert(sizeof(hkTrackerFlagsLayoutHandler) == 0x10);
}
