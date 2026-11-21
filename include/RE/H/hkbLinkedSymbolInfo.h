#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class __declspec(novtable) hkbLinkedSymbolInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbLinkedSymbolInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbLinkedSymbolInfo };

		// members
		hkArray<hkStringPtr> m_eventNames;     // 0x10
		hkArray<hkStringPtr> m_variableNames;  // 0x20
	};
	static_assert(sizeof(hkbLinkedSymbolInfo) == 0x30);
	static_assert(offsetof(hkbLinkedSymbolInfo, m_eventNames) == 0x10);
	static_assert(offsetof(hkbLinkedSymbolInfo, m_variableNames) == 0x20);
}
