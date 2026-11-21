#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbCondition :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCondition };
		inline static constexpr auto VTABLE{ VTABLE::hkbCondition };
	};
	static_assert(sizeof(hkbCondition) == 0x10);
}
