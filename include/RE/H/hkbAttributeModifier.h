#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbAttributeModifierAssignment;

	class __declspec(novtable) hkbAttributeModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAttributeModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbAttributeModifier };

		// members
		hkArray<hkbAttributeModifierAssignment> m_assignments;  // 0x58
	};
	static_assert(sizeof(hkbAttributeModifier) == 0x68);
	static_assert(offsetof(hkbAttributeModifier, m_assignments) == 0x58);
}
