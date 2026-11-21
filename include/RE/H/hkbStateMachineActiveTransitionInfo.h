#pragma once

#include "RE/H/hkbStateMachineTransitionInfoReference.h"

namespace RE
{
	class hkbNodeInternalStateInfo;

	class hkbStateMachineActiveTransitionInfo
	{
	public:

		// members
		void* m_transitionEffect;                                               // 0x00
		hkbNodeInternalStateInfo* m_transitionEffectInternalStateInfo;          // 0x08
		hkbStateMachineTransitionInfoReference m_transitionInfoReference;       // 0x10
		hkbStateMachineTransitionInfoReference m_transitionInfoReferenceForTE;  // 0x16
		std::int32_t m_fromStateId;                                             // 0x1C
		std::int32_t m_toStateId;                                               // 0x20
		bool m_isReturnToPreviousState;                                         // 0x24
	};
	static_assert(sizeof(hkbStateMachineActiveTransitionInfo) == 0x28);
	static_assert(offsetof(hkbStateMachineActiveTransitionInfo, m_transitionEffect) == 0x0);
	static_assert(offsetof(hkbStateMachineActiveTransitionInfo, m_transitionEffectInternalStateInfo) == 0x8);
	static_assert(offsetof(hkbStateMachineActiveTransitionInfo, m_transitionInfoReference) == 0x10);
	static_assert(offsetof(hkbStateMachineActiveTransitionInfo, m_transitionInfoReferenceForTE) == 0x16);
	static_assert(offsetof(hkbStateMachineActiveTransitionInfo, m_fromStateId) == 0x1C);
	static_assert(offsetof(hkbStateMachineActiveTransitionInfo, m_toStateId) == 0x20);
	static_assert(offsetof(hkbStateMachineActiveTransitionInfo, m_isReturnToPreviousState) == 0x24);
}
