#pragma once

#include "RE/H/hkResourceMap.h"

namespace RE
{
	class __declspec(novtable) hkContainerResourceMap :
		public hkResourceMap  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkContainerResourceMap };
		inline static constexpr auto VTABLE{ VTABLE::hkContainerResourceMap };
	};
	static_assert(sizeof(hkContainerResourceMap) == 0x8);
}
