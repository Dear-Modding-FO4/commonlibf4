#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbCondition.h"

namespace RE
{
	class __declspec(novtable) hkbExpressionCondition :
		public hkbCondition  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbExpressionCondition };
		inline static constexpr auto VTABLE{ VTABLE::hkbExpressionCondition };

		// members
		hkStringPtr m_expression;       // 0x10
		void* m_compiledExpressionSet;  // 0x18
	};
	static_assert(sizeof(hkbExpressionCondition) == 0x20);
	static_assert(offsetof(hkbExpressionCondition, m_expression) == 0x10);
	static_assert(offsetof(hkbExpressionCondition, m_compiledExpressionSet) == 0x18);
}
