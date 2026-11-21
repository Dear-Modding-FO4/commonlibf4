#pragma once

#include "RE/H/hkTrackerLayoutHandler.h"

namespace RE
{
	class __declspec(novtable) hkTrackerPadSpuLayoutHandler :
		public hkTrackerLayoutHandler  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTrackerPadSpuLayoutHandler };
		inline static constexpr auto VTABLE{ VTABLE::hkTrackerPadSpuLayoutHandler };
	};
	static_assert(sizeof(hkTrackerPadSpuLayoutHandler) == 0x10);
}
