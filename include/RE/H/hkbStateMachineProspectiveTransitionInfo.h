#pragma once

#include "RE/H/hkbStateMachineTransitionInfoReference.h"

namespace RE
{
	class hkbStateMachineProspectiveTransitionInfo
	{
	public:

		// members
		hkbStateMachineTransitionInfoReference m_transitionInfoReference;       // 0x00
		hkbStateMachineTransitionInfoReference m_transitionInfoReferenceForTE;  // 0x06
		std::int32_t m_toStateId;                                               // 0x0C
	};
	static_assert(sizeof(hkbStateMachineProspectiveTransitionInfo) == 0x10);
	static_assert(offsetof(hkbStateMachineProspectiveTransitionInfo, m_transitionInfoReference) == 0x0);
	static_assert(offsetof(hkbStateMachineProspectiveTransitionInfo, m_transitionInfoReferenceForTE) == 0x6);
	static_assert(offsetof(hkbStateMachineProspectiveTransitionInfo, m_toStateId) == 0xC);
}
