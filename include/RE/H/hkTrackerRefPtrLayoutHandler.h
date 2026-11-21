#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerRefPtrLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerRefPtrLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerRefPtrLayoutHandler };
	};
	static_assert(sizeof(hkTrackerRefPtrLayoutHandler) == 0x10);
}
