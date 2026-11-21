#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerArrayLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerArrayLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerArrayLayoutHandler };
	};
	static_assert(sizeof(hkTrackerArrayLayoutHandler) == 0x10);
}
