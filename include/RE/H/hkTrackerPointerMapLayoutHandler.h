#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerPointerMapLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerPointerMapLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerPointerMapLayoutHandler };
	};
	static_assert(sizeof(hkTrackerPointerMapLayoutHandler) == 0x10);
}
