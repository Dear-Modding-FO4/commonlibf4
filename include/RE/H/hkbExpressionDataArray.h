#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbExpressionData;

	class __declspec(novtable) hkbExpressionDataArray :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbExpressionDataArray };
		inline static constexpr auto VTABLE{ VTABLE::hkbExpressionDataArray };

		// members
		hkArray<hkbExpressionData> m_expressionsData;  // 0x10
	};
	static_assert(sizeof(hkbExpressionDataArray) == 0x20);
	static_assert(offsetof(hkbExpressionDataArray, m_expressionsData) == 0x10);
}
