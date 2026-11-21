#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbEvent.h"
#include "RE/H/hkbGenerator.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbCustomIdSelector;
	class hkbStateMachineStateInfo;
	class hkbStateMachineTransitionInfoArray;

	class __declspec(novtable) hkbStateMachine :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbStateMachine };
		inline static constexpr auto VTABLE{ VTABLE::hkbStateMachine };

		enum class StartStateMode : std::uint8_t
		{
			kStartStateModeDefault = 0,
			kStartStateModeSync = 1,
			kStartStateModeRandom = 2,
			kStartStateModeChooser = 3
		};

		enum class StateMachineSelfTransitionMode : std::uint32_t
		{
			kSelfTransitionModeNoTransition = 0,
			kSelfTransitionModeTransitionToStartState = 1,
			kSelfTransitionModeForceTransitionToStartState = 2
		};

		// members
		hkbEvent m_eventToSendWhenStateOrTransitionChanges;         // 0x88
		hkbCustomIdSelector* m_startStateIdSelector;                // 0xA0
		std::int32_t m_startStateId;                                // 0xA8
		std::int32_t m_returnToPreviousStateEventId;                // 0xAC
		std::int32_t m_randomTransitionEventId;                     // 0xB0
		std::int32_t m_transitionToNextHigherStateEventId;          // 0xB4
		std::int32_t m_transitionToNextLowerStateEventId;           // 0xB8
		std::int32_t m_syncVariableIndex;                           // 0xBC
		std::int32_t m_currentStateId;                              // 0xC0
		bool m_wrapAroundStateId;                                   // 0xC4
		std::int8_t m_maxSimultaneousTransitions;                   // 0xC5
		hkEnum<StartStateMode, std::int8_t> m_startStateMode;                               // 0xC6
		std::int8_t m_selfTransitionMode;                           // 0xC7
		bool m_isActive;                                            // 0xC8
		std::uint8_t padC9[0x7];                                    // 0xC9
		hkArray<hkbStateMachineStateInfo*> m_states;                // 0xD0
		hkbStateMachineTransitionInfoArray* m_wildcardTransitions;  // 0xE0
		void* m_stateIdToIndexMap;                                  // 0xE8
		std::uint8_t m_activeTransitions[0x10];                     // 0xF0
		std::uint8_t m_transitionFlags[0x10];                       // 0x100
		std::uint8_t m_wildcardTransitionFlags[0x10];               // 0x110
		std::uint8_t m_delayedTransitions[0x10];                    // 0x120
		float m_timeInState;                                        // 0x130
		float m_lastLocalTime;                                      // 0x134
		std::int32_t m_previousStateId;                             // 0x138
		std::int32_t m_nextStartStateIndexOverride;                 // 0x13C
		bool m_stateOrTransitionChanged;                            // 0x140
		bool m_echoNextUpdate;                                      // 0x141
		bool m_hasEventlessWildcardTransitions;                     // 0x142
		std::uint8_t pad143[0x1];                                   // 0x143
		std::uint16_t m_sCurrentStateIndexAndEntered;               // 0x144
	};
	static_assert(sizeof(hkbStateMachine) == 0x148);
	static_assert(offsetof(hkbStateMachine, m_eventToSendWhenStateOrTransitionChanges) == 0x88);
	static_assert(offsetof(hkbStateMachine, m_startStateIdSelector) == 0xA0);
	static_assert(offsetof(hkbStateMachine, m_startStateId) == 0xA8);
	static_assert(offsetof(hkbStateMachine, m_returnToPreviousStateEventId) == 0xAC);
	static_assert(offsetof(hkbStateMachine, m_randomTransitionEventId) == 0xB0);
	static_assert(offsetof(hkbStateMachine, m_transitionToNextHigherStateEventId) == 0xB4);
	static_assert(offsetof(hkbStateMachine, m_transitionToNextLowerStateEventId) == 0xB8);
	static_assert(offsetof(hkbStateMachine, m_syncVariableIndex) == 0xBC);
	static_assert(offsetof(hkbStateMachine, m_currentStateId) == 0xC0);
	static_assert(offsetof(hkbStateMachine, m_wrapAroundStateId) == 0xC4);
	static_assert(offsetof(hkbStateMachine, m_maxSimultaneousTransitions) == 0xC5);
	static_assert(offsetof(hkbStateMachine, m_startStateMode) == 0xC6);
	static_assert(offsetof(hkbStateMachine, m_selfTransitionMode) == 0xC7);
	static_assert(offsetof(hkbStateMachine, m_isActive) == 0xC8);
	static_assert(offsetof(hkbStateMachine, m_states) == 0xD0);
	static_assert(offsetof(hkbStateMachine, m_wildcardTransitions) == 0xE0);
	static_assert(offsetof(hkbStateMachine, m_stateIdToIndexMap) == 0xE8);
	static_assert(offsetof(hkbStateMachine, m_activeTransitions) == 0xF0);
	static_assert(offsetof(hkbStateMachine, m_transitionFlags) == 0x100);
	static_assert(offsetof(hkbStateMachine, m_wildcardTransitionFlags) == 0x110);
	static_assert(offsetof(hkbStateMachine, m_delayedTransitions) == 0x120);
	static_assert(offsetof(hkbStateMachine, m_timeInState) == 0x130);
	static_assert(offsetof(hkbStateMachine, m_lastLocalTime) == 0x134);
	static_assert(offsetof(hkbStateMachine, m_previousStateId) == 0x138);
	static_assert(offsetof(hkbStateMachine, m_nextStartStateIndexOverride) == 0x13C);
	static_assert(offsetof(hkbStateMachine, m_stateOrTransitionChanged) == 0x140);
	static_assert(offsetof(hkbStateMachine, m_echoNextUpdate) == 0x141);
	static_assert(offsetof(hkbStateMachine, m_hasEventlessWildcardTransitions) == 0x142);
	static_assert(offsetof(hkbStateMachine, m_sCurrentStateIndexAndEntered) == 0x144);
}
