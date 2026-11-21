#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbCondition.h"

namespace RE
{
	class __declspec(novtable) hkbScriptCondition :
		public hkbCondition  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbScriptCondition };
		inline static constexpr auto VTABLE{ VTABLE::hkbScriptCondition };

		// members
		hkStringPtr m_conditionScript;  // 0x10
	};
	static_assert(sizeof(hkbScriptCondition) == 0x18);
	static_assert(offsetof(hkbScriptCondition, m_conditionScript) == 0x10);
}
