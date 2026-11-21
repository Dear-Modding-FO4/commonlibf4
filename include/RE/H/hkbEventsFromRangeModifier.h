#pragma once

#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbEventRangeDataArray;

	class __declspec(novtable) hkbEventsFromRangeModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEventsFromRangeModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbEventsFromRangeModifier };

		// members
		float m_inputValue;                             // 0x58
		float m_lowerBound;                             // 0x5C
		hkbEventRangeDataArray* m_eventRanges;          // 0x60
		std::uint8_t m_wasActiveInPreviousFrame[0x10];  // 0x68
	};
	static_assert(sizeof(hkbEventsFromRangeModifier) == 0x78);
	static_assert(offsetof(hkbEventsFromRangeModifier, m_inputValue) == 0x58);
	static_assert(offsetof(hkbEventsFromRangeModifier, m_lowerBound) == 0x5C);
	static_assert(offsetof(hkbEventsFromRangeModifier, m_eventRanges) == 0x60);
	static_assert(offsetof(hkbEventsFromRangeModifier, m_wasActiveInPreviousFrame) == 0x68);
}
