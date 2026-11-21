#pragma once

#include "RE/H/hkbEvent.h"

namespace RE
{
	class hkbEventSequencedDataSequencedEvent
	{
	public:

		// members
		hkbEvent m_event;  // 0x00
		float m_time;      // 0x18
	};
	static_assert(sizeof(hkbEventSequencedDataSequencedEvent) == 0x20);
	static_assert(offsetof(hkbEventSequencedDataSequencedEvent, m_event) == 0x0);
	static_assert(offsetof(hkbEventSequencedDataSequencedEvent, m_time) == 0x18);
}
