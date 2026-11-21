#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbModifier;

	class __declspec(novtable) hkbModifierList :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbModifierList };
		inline static constexpr auto VTABLE{ VTABLE::hkbModifierList };

		// members
		hkArray<hkbModifier*> m_modifiers;  // 0x58
	};
	static_assert(sizeof(hkbModifierList) == 0x68);
	static_assert(offsetof(hkbModifierList, m_modifiers) == 0x58);
}
