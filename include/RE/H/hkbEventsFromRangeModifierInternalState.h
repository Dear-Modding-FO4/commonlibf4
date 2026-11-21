#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbEventsFromRangeModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEventsFromRangeModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbEventsFromRangeModifierInternalState };

		// members
		hkArray<bool> m_wasActiveInPreviousFrame;  // 0x10
	};
	static_assert(sizeof(hkbEventsFromRangeModifierInternalState) == 0x20);
	static_assert(offsetof(hkbEventsFromRangeModifierInternalState, m_wasActiveInPreviousFrame) == 0x10);
}
