#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class __declspec(novtable) hkbBehaviorGraphStringData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBehaviorGraphStringData };
		inline static constexpr auto VTABLE{ VTABLE::hkbBehaviorGraphStringData };

		// members
		hkArray<hkStringPtr> m_eventNames;              // 0x10
		hkArray<hkStringPtr> m_attributeNames;          // 0x20
		hkArray<hkStringPtr> m_variableNames;           // 0x30
		hkArray<hkStringPtr> m_characterPropertyNames;  // 0x40
	};
	static_assert(sizeof(hkbBehaviorGraphStringData) == 0x50);
	static_assert(offsetof(hkbBehaviorGraphStringData, m_eventNames) == 0x10);
	static_assert(offsetof(hkbBehaviorGraphStringData, m_attributeNames) == 0x20);
	static_assert(offsetof(hkbBehaviorGraphStringData, m_variableNames) == 0x30);
	static_assert(offsetof(hkbBehaviorGraphStringData, m_characterPropertyNames) == 0x40);
}
