#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbCompiledExpressionSetToken;

	class __declspec(novtable) hkbCompiledExpressionSet :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCompiledExpressionSet };
		inline static constexpr auto VTABLE{ VTABLE::hkbCompiledExpressionSet };

		// members
		hkArray<hkbCompiledExpressionSetToken> m_rpn;  // 0x10
		hkArray<std::int32_t> m_expressionToRpnIndex;  // 0x20
		std::int8_t m_numExpressions;                  // 0x30
	};
	static_assert(sizeof(hkbCompiledExpressionSet) == 0x38);
	static_assert(offsetof(hkbCompiledExpressionSet, m_rpn) == 0x10);
	static_assert(offsetof(hkbCompiledExpressionSet, m_expressionToRpnIndex) == 0x20);
	static_assert(offsetof(hkbCompiledExpressionSet, m_numExpressions) == 0x30);
}
