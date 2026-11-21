#pragma once

#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbModifier;

	class __declspec(novtable) hkbModifierWrapper :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbModifierWrapper };
		inline static constexpr auto VTABLE{ VTABLE::hkbModifierWrapper };

		// members
		hkbModifier* m_modifier;  // 0x58
	};
	static_assert(sizeof(hkbModifierWrapper) == 0x60);
	static_assert(offsetof(hkbModifierWrapper, m_modifier) == 0x58);
}
