#pragma once

#include "RE/H/hkResourceBase.h"

namespace RE
{
	class __declspec(novtable) hkResourceContainer :
		public hkResourceBase  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkResourceContainer };
		inline static constexpr auto VTABLE{ VTABLE::hkResourceContainer };
	};
	static_assert(sizeof(hkResourceContainer) == 0x10);
}
