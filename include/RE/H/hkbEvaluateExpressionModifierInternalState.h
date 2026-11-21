#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbEvaluateExpressionModifierInternalExpressionData;

	class __declspec(novtable) hkbEvaluateExpressionModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEvaluateExpressionModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbEvaluateExpressionModifierInternalState };

		// members
		hkArray<hkbEvaluateExpressionModifierInternalExpressionData> m_internalExpressionsData;  // 0x10
	};
	static_assert(sizeof(hkbEvaluateExpressionModifierInternalState) == 0x20);
	static_assert(offsetof(hkbEvaluateExpressionModifierInternalState, m_internalExpressionsData) == 0x10);
}
