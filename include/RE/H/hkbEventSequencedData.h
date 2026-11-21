#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbSequencedData.h"

namespace RE
{
	class hkbEventSequencedDataSequencedEvent;

	class __declspec(novtable) hkbEventSequencedData :
		public hkbSequencedData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEventSequencedData };
		inline static constexpr auto VTABLE{ VTABLE::hkbEventSequencedData };

		// members
		hkArray<hkbEventSequencedDataSequencedEvent> m_events;  // 0x10
	};
	static_assert(sizeof(hkbEventSequencedData) == 0x20);
	static_assert(offsetof(hkbEventSequencedData, m_events) == 0x10);
}
