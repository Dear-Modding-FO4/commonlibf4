#pragma once

#include "RE/H/hkbGenerator.h"

namespace RE
{
	class hkbGenerator;
	class hkbModifier;

	class __declspec(novtable) hkbModifierGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbModifierGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbModifierGenerator };

		// members
		hkbModifier* m_modifier;    // 0x88
		hkbGenerator* m_generator;  // 0x90
	};
	static_assert(sizeof(hkbModifierGenerator) == 0x98);
	static_assert(offsetof(hkbModifierGenerator, m_modifier) == 0x88);
	static_assert(offsetof(hkbModifierGenerator, m_generator) == 0x90);
}
