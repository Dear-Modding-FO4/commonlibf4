#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbRotateCharacterModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRotateCharacterModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbRotateCharacterModifierInternalState };

		// members
		float m_angle;  // 0x10
	};
	static_assert(sizeof(hkbRotateCharacterModifierInternalState) == 0x18);
	static_assert(offsetof(hkbRotateCharacterModifierInternalState, m_angle) == 0x10);
}
