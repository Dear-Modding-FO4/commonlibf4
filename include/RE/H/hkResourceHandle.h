#pragma once

#include "RE/H/hkResourceBase.h"

namespace RE
{
	class __declspec(novtable) hkResourceHandle :
		public hkResourceBase  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkResourceHandle };
		inline static constexpr auto VTABLE{ VTABLE::hkResourceHandle };
	};
	static_assert(sizeof(hkResourceHandle) == 0x10);
}
