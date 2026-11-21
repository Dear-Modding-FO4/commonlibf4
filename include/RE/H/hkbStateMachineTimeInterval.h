#pragma once

namespace RE
{
	class hkbStateMachineTimeInterval
	{
	public:

		// members
		std::int32_t m_enterEventId;  // 0x00
		std::int32_t m_exitEventId;   // 0x04
		float m_enterTime;            // 0x08
		float m_exitTime;             // 0x0C
	};
	static_assert(sizeof(hkbStateMachineTimeInterval) == 0x10);
	static_assert(offsetof(hkbStateMachineTimeInterval, m_enterEventId) == 0x0);
	static_assert(offsetof(hkbStateMachineTimeInterval, m_exitEventId) == 0x4);
	static_assert(offsetof(hkbStateMachineTimeInterval, m_enterTime) == 0x8);
	static_assert(offsetof(hkbStateMachineTimeInterval, m_exitTime) == 0xC);
}
