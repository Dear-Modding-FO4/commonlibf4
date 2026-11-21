#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbMoveCharacterModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbMoveCharacterModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbMoveCharacterModifierInternalState };

		// members
		float m_timeSinceLastModify;  // 0x10
	};
	static_assert(sizeof(hkbMoveCharacterModifierInternalState) == 0x18);
	static_assert(offsetof(hkbMoveCharacterModifierInternalState, m_timeSinceLastModify) == 0x10);
}
