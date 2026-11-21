#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbStateMachineActiveTransitionInfo;
	class hkbStateMachineDelayedTransitionInfo;

	class __declspec(novtable) hkbStateMachineInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbStateMachineInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbStateMachineInternalState };

		// members
		hkArray<hkbStateMachineActiveTransitionInfo> m_activeTransitions;    // 0x10
		hkArray<std::uint8_t> m_transitionFlags;                             // 0x20
		hkArray<std::uint8_t> m_wildcardTransitionFlags;                     // 0x30
		hkArray<hkbStateMachineDelayedTransitionInfo> m_delayedTransitions;  // 0x40
		float m_timeInState;                                                 // 0x50
		float m_lastLocalTime;                                               // 0x54
		std::int32_t m_currentStateId;                                       // 0x58
		std::int32_t m_previousStateId;                                      // 0x5C
		std::int32_t m_nextStartStateIndexOverride;                          // 0x60
		bool m_stateOrTransitionChanged;                                     // 0x64
		bool m_echoNextUpdate;                                               // 0x65
		bool m_hasEventlessWildcardTransitions;                              // 0x66
	};
	static_assert(sizeof(hkbStateMachineInternalState) == 0x68);
	static_assert(offsetof(hkbStateMachineInternalState, m_activeTransitions) == 0x10);
	static_assert(offsetof(hkbStateMachineInternalState, m_transitionFlags) == 0x20);
	static_assert(offsetof(hkbStateMachineInternalState, m_wildcardTransitionFlags) == 0x30);
	static_assert(offsetof(hkbStateMachineInternalState, m_delayedTransitions) == 0x40);
	static_assert(offsetof(hkbStateMachineInternalState, m_timeInState) == 0x50);
	static_assert(offsetof(hkbStateMachineInternalState, m_lastLocalTime) == 0x54);
	static_assert(offsetof(hkbStateMachineInternalState, m_currentStateId) == 0x58);
	static_assert(offsetof(hkbStateMachineInternalState, m_previousStateId) == 0x5C);
	static_assert(offsetof(hkbStateMachineInternalState, m_nextStartStateIndexOverride) == 0x60);
	static_assert(offsetof(hkbStateMachineInternalState, m_stateOrTransitionChanged) == 0x64);
	static_assert(offsetof(hkbStateMachineInternalState, m_echoNextUpdate) == 0x65);
	static_assert(offsetof(hkbStateMachineInternalState, m_hasEventlessWildcardTransitions) == 0x66);
}
