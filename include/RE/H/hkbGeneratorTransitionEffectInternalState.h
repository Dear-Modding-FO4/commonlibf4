#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbGeneratorTransitionEffectInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbGeneratorTransitionEffectInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbGeneratorTransitionEffectInternalState };

		// members
		float m_timeInTransition;                     // 0x10
		float m_duration;                             // 0x14
		float m_effectiveBlendInDuration;             // 0x18
		float m_effectiveBlendOutDuration;            // 0x1C
		std::int8_t m_toGeneratorState;               // 0x20
		bool m_echoTransitionGenerator;               // 0x21
		std::int8_t m_toGeneratorSelfTransitionMode;  // 0x22
		bool m_justActivated;                         // 0x23
		bool m_updateActiveNodes;                     // 0x24
		std::int8_t m_stage;                          // 0x25
	};
	static_assert(sizeof(hkbGeneratorTransitionEffectInternalState) == 0x28);
	static_assert(offsetof(hkbGeneratorTransitionEffectInternalState, m_timeInTransition) == 0x10);
	static_assert(offsetof(hkbGeneratorTransitionEffectInternalState, m_duration) == 0x14);
	static_assert(offsetof(hkbGeneratorTransitionEffectInternalState, m_effectiveBlendInDuration) == 0x18);
	static_assert(offsetof(hkbGeneratorTransitionEffectInternalState, m_effectiveBlendOutDuration) == 0x1C);
	static_assert(offsetof(hkbGeneratorTransitionEffectInternalState, m_toGeneratorState) == 0x20);
	static_assert(offsetof(hkbGeneratorTransitionEffectInternalState, m_echoTransitionGenerator) == 0x21);
	static_assert(offsetof(hkbGeneratorTransitionEffectInternalState, m_toGeneratorSelfTransitionMode) == 0x22);
	static_assert(offsetof(hkbGeneratorTransitionEffectInternalState, m_justActivated) == 0x23);
	static_assert(offsetof(hkbGeneratorTransitionEffectInternalState, m_updateActiveNodes) == 0x24);
	static_assert(offsetof(hkbGeneratorTransitionEffectInternalState, m_stage) == 0x25);
}
