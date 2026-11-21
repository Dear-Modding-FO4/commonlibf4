#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbEventRangeData;

	class __declspec(novtable) hkbEventRangeDataArray :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEventRangeDataArray };
		inline static constexpr auto VTABLE{ VTABLE::hkbEventRangeDataArray };

		// members
		hkArray<hkbEventRangeData> m_eventData;  // 0x10
	};
	static_assert(sizeof(hkbEventRangeDataArray) == 0x20);
	static_assert(offsetof(hkbEventRangeDataArray, m_eventData) == 0x10);
}
