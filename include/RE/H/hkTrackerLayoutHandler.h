#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkTrackerLayoutHandler :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerLayoutHandler };
	};
	static_assert(sizeof(hkTrackerLayoutHandler) == 0x10);
}
