#pragma once

#include "RE/H/hkbEventProperty.h"

namespace RE
{
	class hkbEventRangeData
	{
	public:

		enum class EventRangeMode : std::uint32_t
		{
			kEventModeSendOnEnterRange = 0,
			kEventModeSendWhenInRange = 1
		};

		// members
		float m_upperBound;        // 0x00
		std::uint8_t unk04[0x4];   // 0x04
		hkbEventProperty m_event;  // 0x08
		std::int8_t m_eventMode;   // 0x18
	};
	static_assert(sizeof(hkbEventRangeData) == 0x20);
	static_assert(offsetof(hkbEventRangeData, m_upperBound) == 0x0);
	static_assert(offsetof(hkbEventRangeData, m_event) == 0x8);
	static_assert(offsetof(hkbEventRangeData, m_eventMode) == 0x18);
}
