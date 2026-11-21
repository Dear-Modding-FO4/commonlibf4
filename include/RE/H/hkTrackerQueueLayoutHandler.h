#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerQueueLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerQueueLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerQueueLayoutHandler };
	};
	static_assert(sizeof(hkTrackerQueueLayoutHandler) == 0x10);
}
