#pragma once

#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbMirrorModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbMirrorModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbMirrorModifier };

		// members
		bool m_isAdditive;  // 0x58
	};
	static_assert(sizeof(hkbMirrorModifier) == 0x60);
	static_assert(offsetof(hkbMirrorModifier, m_isAdditive) == 0x58);
}
