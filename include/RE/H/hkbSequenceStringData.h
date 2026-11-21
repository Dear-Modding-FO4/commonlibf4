#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class __declspec(novtable) hkbSequenceStringData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSequenceStringData };
		inline static constexpr auto VTABLE{ VTABLE::hkbSequenceStringData };

		// members
		hkArray<hkStringPtr> m_eventNames;     // 0x10
		hkArray<hkStringPtr> m_variableNames;  // 0x20
	};
	static_assert(sizeof(hkbSequenceStringData) == 0x30);
	static_assert(offsetof(hkbSequenceStringData, m_eventNames) == 0x10);
	static_assert(offsetof(hkbSequenceStringData, m_variableNames) == 0x20);
}
