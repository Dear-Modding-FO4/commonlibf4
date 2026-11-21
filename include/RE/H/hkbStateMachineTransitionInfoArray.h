#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbStateMachineTransitionInfo;

	class __declspec(novtable) hkbStateMachineTransitionInfoArray :
		public hkReferencedObject  // 0x00
	{
	public:

		// members
		hkArray<hkbStateMachineTransitionInfo> m_transitions;  // 0x10
		bool m_hasEventlessTransitions;                        // 0x20
		bool m_hasTimeBoundedTransitions;                      // 0x21
	};
	static_assert(sizeof(hkbStateMachineTransitionInfoArray) == 0x28);
	static_assert(offsetof(hkbStateMachineTransitionInfoArray, m_transitions) == 0x10);
	static_assert(offsetof(hkbStateMachineTransitionInfoArray, m_hasEventlessTransitions) == 0x20);
	static_assert(offsetof(hkbStateMachineTransitionInfoArray, m_hasTimeBoundedTransitions) == 0x21);
}
