#pragma once

#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbExpressionDataArray;

	class __declspec(novtable) hkbEvaluateExpressionModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEvaluateExpressionModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbEvaluateExpressionModifier };

		// members
		hkbExpressionDataArray* m_expressions;         // 0x58
		void* m_compiledExpressionSet;                 // 0x60
		std::uint8_t m_internalExpressionsData[0x10];  // 0x68
	};
	static_assert(sizeof(hkbEvaluateExpressionModifier) == 0x78);
	static_assert(offsetof(hkbEvaluateExpressionModifier, m_expressions) == 0x58);
	static_assert(offsetof(hkbEvaluateExpressionModifier, m_compiledExpressionSet) == 0x60);
	static_assert(offsetof(hkbEvaluateExpressionModifier, m_internalExpressionsData) == 0x68);
}
