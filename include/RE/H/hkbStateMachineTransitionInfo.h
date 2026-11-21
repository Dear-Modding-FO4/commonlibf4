#pragma once

#include "RE/H/hkbStateMachineTimeInterval.h"

namespace RE
{
	class hkbCondition;
	class hkbTransitionEffect;

	class hkbStateMachineTransitionInfo
	{
	public:

		enum class TransitionFlags : std::uint32_t
		{
			kFlagUseTriggerInterval = 1,
			kFlagUseInitiateInterval = 2,
			kFlagUninterruptibleWhilePlaying = 4,
			kFlagUninterruptibleWhileDelayed = 8,
			kFlagDelayStateChange = 16,
			kFlagDisabled = 32,
			kFlagDisallowReturnToPreviousState = 64,
			kFlagDisallowRandomTransition = 128,
			kFlagDisableCondition = 256,
			kFlagAllowSelfTransitionByTransitionFromAnyState = 512,
			kFlagIsGlobalWildcard = 1024,
			kFlagIsLocalWildcard = 2048,
			kFlagFromNestedStateIdIsValid = 4096,
			kFlagToNestedStateIdIsValid = 8192,
			kFlagAbutAtEndOfFromGenerator = 16384
		};

		enum class InternalFlagBits : std::uint32_t
		{
			kFlagInternalInTriggerInterval = 1,
			kFlagInternalInInitiateInterval = 2
		};

		// members
		hkbStateMachineTimeInterval m_triggerInterval;   // 0x00
		hkbStateMachineTimeInterval m_initiateInterval;  // 0x10
		hkbTransitionEffect* m_transition;               // 0x20
		hkbCondition* m_condition;                       // 0x28
		std::int32_t m_eventId;                          // 0x30
		std::int32_t m_toStateId;                        // 0x34
		std::int32_t m_fromNestedStateId;                // 0x38
		std::int32_t m_toNestedStateId;                  // 0x3C
		std::int16_t m_priority;                         // 0x40
		std::int16_t m_flags;                            // 0x42
	};
	static_assert(sizeof(hkbStateMachineTransitionInfo) == 0x48);
	static_assert(offsetof(hkbStateMachineTransitionInfo, m_triggerInterval) == 0x0);
	static_assert(offsetof(hkbStateMachineTransitionInfo, m_initiateInterval) == 0x10);
	static_assert(offsetof(hkbStateMachineTransitionInfo, m_transition) == 0x20);
	static_assert(offsetof(hkbStateMachineTransitionInfo, m_condition) == 0x28);
	static_assert(offsetof(hkbStateMachineTransitionInfo, m_eventId) == 0x30);
	static_assert(offsetof(hkbStateMachineTransitionInfo, m_toStateId) == 0x34);
	static_assert(offsetof(hkbStateMachineTransitionInfo, m_fromNestedStateId) == 0x38);
	static_assert(offsetof(hkbStateMachineTransitionInfo, m_toNestedStateId) == 0x3C);
	static_assert(offsetof(hkbStateMachineTransitionInfo, m_priority) == 0x40);
	static_assert(offsetof(hkbStateMachineTransitionInfo, m_flags) == 0x42);
}
