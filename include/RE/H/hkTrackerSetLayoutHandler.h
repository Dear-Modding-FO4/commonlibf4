#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerSetLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerSetLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerSetLayoutHandler };
	};
	static_assert(sizeof(hkTrackerSetLayoutHandler) == 0x10);
}
