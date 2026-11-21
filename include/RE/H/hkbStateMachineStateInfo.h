#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbBindable.h"

namespace RE
{
	class hkbGenerator;
	class hkbStateListener;
	class hkbStateMachineEventPropertyArray;
	class hkbStateMachineTransitionInfoArray;

	class __declspec(novtable) hkbStateMachineStateInfo :
		public hkbBindable  // 0x00
	{
	public:

		// members
		hkArray<hkbStateListener*> m_listeners;                  // 0x30
		hkbStateMachineEventPropertyArray* m_enterNotifyEvents;  // 0x40
		hkbStateMachineEventPropertyArray* m_exitNotifyEvents;   // 0x48
		hkbStateMachineTransitionInfoArray* m_transitions;       // 0x50
		hkbGenerator* m_generator;                               // 0x58
		hkStringPtr m_name;                                      // 0x60
		std::int32_t m_stateId;                                  // 0x68
		float m_probability;                                     // 0x6C
		bool m_enable;                                           // 0x70
		bool m_hasEventlessTransitions;                          // 0x71
	};
	static_assert(sizeof(hkbStateMachineStateInfo) == 0x78);
	static_assert(offsetof(hkbStateMachineStateInfo, m_listeners) == 0x30);
	static_assert(offsetof(hkbStateMachineStateInfo, m_enterNotifyEvents) == 0x40);
	static_assert(offsetof(hkbStateMachineStateInfo, m_exitNotifyEvents) == 0x48);
	static_assert(offsetof(hkbStateMachineStateInfo, m_transitions) == 0x50);
	static_assert(offsetof(hkbStateMachineStateInfo, m_generator) == 0x58);
	static_assert(offsetof(hkbStateMachineStateInfo, m_name) == 0x60);
	static_assert(offsetof(hkbStateMachineStateInfo, m_stateId) == 0x68);
	static_assert(offsetof(hkbStateMachineStateInfo, m_probability) == 0x6C);
	static_assert(offsetof(hkbStateMachineStateInfo, m_enable) == 0x70);
	static_assert(offsetof(hkbStateMachineStateInfo, m_hasEventlessTransitions) == 0x71);
}
