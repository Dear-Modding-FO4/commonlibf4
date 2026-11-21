#pragma once

#include "RE/H/hkbTransitionEffect.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbGenerator;

	class __declspec(novtable) hkbGeneratorTransitionEffect :
		public hkbTransitionEffect  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbGeneratorTransitionEffect };
		inline static constexpr auto VTABLE{ VTABLE::hkbGeneratorTransitionEffect };

		enum class ToGeneratorState : std::uint8_t
		{
			kStateInactive = 0,
			kStateReadyForSetLocalTime = 1,
			kStateReadyForApplySelfTransitionMode = 2,
			kStateActive = 3
		};

		enum class Stage : std::uint8_t
		{
			kStageBlendingIn = 0,
			kStagePlayingTransitionGenerator = 1,
			kStageBlendingOut = 2
		};

		enum class ChildState : std::uint8_t
		{
			kChildFromGenerator = 0,
			kChildTransitionGenerator = 1,
			kChildToGenerator = 2,
			kChildNone = 3
		};

		// members
		hkbGenerator* m_transitionGenerator;          // 0xA8
		float m_blendInDuration;                      // 0xB0
		float m_blendOutDuration;                     // 0xB4
		bool m_syncToGeneratorStartTime;              // 0xB8
		hkEnum<ChildState, std::int8_t> m_childState;                     // 0xB9
		std::uint8_t padBA[0x2];                      // 0xBA
		float m_timeInTransition;                     // 0xBC
		float m_duration;                             // 0xC0
		float m_effectiveBlendInDuration;             // 0xC4
		float m_effectiveBlendOutDuration;            // 0xC8
		hkEnum<ToGeneratorState, std::int8_t> m_toGeneratorState;               // 0xCC
		bool m_echoTransitionGenerator;               // 0xCD
		hkEnum<hkbTransitionEffect::SelfTransitionMode, std::int8_t> m_toGeneratorSelfTransitionMode;  // 0xCE
		bool m_justActivated;                         // 0xCF
		bool m_updateActiveNodes;                     // 0xD0
		hkEnum<Stage, std::int8_t> m_stage;                          // 0xD1
	};
	static_assert(sizeof(hkbGeneratorTransitionEffect) == 0xD8);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_transitionGenerator) == 0xA8);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_blendInDuration) == 0xB0);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_blendOutDuration) == 0xB4);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_syncToGeneratorStartTime) == 0xB8);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_childState) == 0xB9);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_timeInTransition) == 0xBC);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_duration) == 0xC0);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_effectiveBlendInDuration) == 0xC4);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_effectiveBlendOutDuration) == 0xC8);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_toGeneratorState) == 0xCC);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_echoTransitionGenerator) == 0xCD);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_toGeneratorSelfTransitionMode) == 0xCE);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_justActivated) == 0xCF);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_updateActiveNodes) == 0xD0);
	static_assert(offsetof(hkbGeneratorTransitionEffect, m_stage) == 0xD1);
}
