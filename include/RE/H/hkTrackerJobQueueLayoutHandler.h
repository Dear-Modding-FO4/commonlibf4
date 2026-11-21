#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerJobQueueLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerJobQueueLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerJobQueueLayoutHandler };
	};
	static_assert(sizeof(hkTrackerJobQueueLayoutHandler) == 0x10);
}
