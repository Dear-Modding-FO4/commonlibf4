#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerStringPtrLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerStringPtrLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerStringPtrLayoutHandler };
	};
	static_assert(sizeof(hkTrackerStringPtrLayoutHandler) == 0x10);
}
