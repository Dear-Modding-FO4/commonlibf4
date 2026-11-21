#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbModifier;
	class hkbStateMachine;

	class __declspec(novtable) hkbStateDependentModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbStateDependentModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbStateDependentModifier };

		// members
		bool m_applyModifierDuringTransition;  // 0x58
		std::uint8_t pad59[0x7];               // 0x59
		hkArray<std::int32_t> m_stateIds;      // 0x60
		hkbModifier* m_modifier;               // 0x70
		bool m_isActive;                       // 0x78
		std::uint8_t pad79[0x7];               // 0x79
		hkbStateMachine* m_stateMachine;       // 0x80
	};
	static_assert(sizeof(hkbStateDependentModifier) == 0x88);
	static_assert(offsetof(hkbStateDependentModifier, m_applyModifierDuringTransition) == 0x58);
	static_assert(offsetof(hkbStateDependentModifier, m_stateIds) == 0x60);
	static_assert(offsetof(hkbStateDependentModifier, m_modifier) == 0x70);
	static_assert(offsetof(hkbStateDependentModifier, m_isActive) == 0x78);
	static_assert(offsetof(hkbStateDependentModifier, m_stateMachine) == 0x80);
}
