#pragma once

namespace RE
{
	class hkbStateMachineTransitionInfoReference
	{
	public:

		// members
		std::int16_t m_fromStateIndex;   // 0x00
		std::int16_t m_transitionIndex;  // 0x02
		std::int16_t m_stateMachineId;   // 0x04
	};
	static_assert(sizeof(hkbStateMachineTransitionInfoReference) == 0x6);
	static_assert(offsetof(hkbStateMachineTransitionInfoReference, m_fromStateIndex) == 0x0);
	static_assert(offsetof(hkbStateMachineTransitionInfoReference, m_transitionIndex) == 0x2);
	static_assert(offsetof(hkbStateMachineTransitionInfoReference, m_stateMachineId) == 0x4);
}
