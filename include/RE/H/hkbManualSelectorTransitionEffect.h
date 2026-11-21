#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbTransitionEffect.h"

namespace RE
{
	class hkbCustomIdSelector;
	class hkbTransitionEffect;

	class __declspec(novtable) hkbManualSelectorTransitionEffect :
		public hkbTransitionEffect  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbManualSelectorTransitionEffect };
		inline static constexpr auto VTABLE{ VTABLE::hkbManualSelectorTransitionEffect };

		// members
		hkArray<hkbTransitionEffect*> m_transitionEffects;  // 0xA8
		std::uint8_t m_selectedIndex;                       // 0xB8
		std::uint8_t padB9[0x7];                            // 0xB9
		hkbCustomIdSelector* m_indexSelector;               // 0xC0
		std::uint8_t m_currentTransitionEffectIndex;        // 0xC8
		std::uint8_t padC9[0x7];                            // 0xC9
		void* m_currentTransitionEffect;                    // 0xD0
		void* m_parentStateMachine;                         // 0xD8
		void* m_referenceBehavior;                          // 0xE0
	};
	static_assert(sizeof(hkbManualSelectorTransitionEffect) == 0xE8);
	static_assert(offsetof(hkbManualSelectorTransitionEffect, m_transitionEffects) == 0xA8);
	static_assert(offsetof(hkbManualSelectorTransitionEffect, m_selectedIndex) == 0xB8);
	static_assert(offsetof(hkbManualSelectorTransitionEffect, m_indexSelector) == 0xC0);
	static_assert(offsetof(hkbManualSelectorTransitionEffect, m_currentTransitionEffectIndex) == 0xC8);
	static_assert(offsetof(hkbManualSelectorTransitionEffect, m_currentTransitionEffect) == 0xD0);
	static_assert(offsetof(hkbManualSelectorTransitionEffect, m_parentStateMachine) == 0xD8);
	static_assert(offsetof(hkbManualSelectorTransitionEffect, m_referenceBehavior) == 0xE0);
}
