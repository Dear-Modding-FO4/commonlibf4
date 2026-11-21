#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerJobQueueDynamicDataLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerJobQueueDynamicDataLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerJobQueueDynamicDataLayoutHandler };
	};
	static_assert(sizeof(hkTrackerJobQueueDynamicDataLayoutHandler) == 0x10);
}
