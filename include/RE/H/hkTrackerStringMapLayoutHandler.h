#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerStringMapLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerStringMapLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerStringMapLayoutHandler };
	};
	static_assert(sizeof(hkTrackerStringMapLayoutHandler) == 0x10);
}
