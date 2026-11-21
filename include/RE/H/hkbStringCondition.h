#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbCondition.h"

namespace RE
{
	class __declspec(novtable) hkbStringCondition :
		public hkbCondition  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbStringCondition };
		inline static constexpr auto VTABLE{ VTABLE::hkbStringCondition };

		// members
		hkStringPtr m_conditionString;  // 0x10
	};
	static_assert(sizeof(hkbStringCondition) == 0x18);
	static_assert(offsetof(hkbStringCondition, m_conditionString) == 0x10);
}
