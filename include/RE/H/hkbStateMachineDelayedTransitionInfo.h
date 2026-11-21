#pragma once

#include "RE/H/hkbStateMachineProspectiveTransitionInfo.h"

namespace RE
{
	class hkbStateMachineDelayedTransitionInfo
	{
	public:

		// members
		hkbStateMachineProspectiveTransitionInfo m_delayedTransition;  // 0x00
		float m_timeDelayed;                                           // 0x10
		bool m_isDelayedTransitionReturnToPreviousState;               // 0x14
		bool m_wasInAbutRangeLastFrame;                                // 0x15
	};
	static_assert(sizeof(hkbStateMachineDelayedTransitionInfo) == 0x18);
	static_assert(offsetof(hkbStateMachineDelayedTransitionInfo, m_delayedTransition) == 0x0);
	static_assert(offsetof(hkbStateMachineDelayedTransitionInfo, m_timeDelayed) == 0x10);
	static_assert(offsetof(hkbStateMachineDelayedTransitionInfo, m_isDelayedTransitionReturnToPreviousState) == 0x14);
	static_assert(offsetof(hkbStateMachineDelayedTransitionInfo, m_wasInAbutRangeLastFrame) == 0x15);
}
