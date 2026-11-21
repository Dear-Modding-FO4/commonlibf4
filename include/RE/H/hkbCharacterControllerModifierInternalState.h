#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbCharacterControllerModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterControllerModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterControllerModifierInternalState };

		// members
		hkVector4f m_gravity;           // 0x10
		bool m_isInitialVelocityAdded;  // 0x20
		bool m_isTouchingGround;        // 0x21
	};
	static_assert(sizeof(hkbCharacterControllerModifierInternalState) == 0x30);
	static_assert(offsetof(hkbCharacterControllerModifierInternalState, m_gravity) == 0x10);
	static_assert(offsetof(hkbCharacterControllerModifierInternalState, m_isInitialVelocityAdded) == 0x20);
	static_assert(offsetof(hkbCharacterControllerModifierInternalState, m_isTouchingGround) == 0x21);
}
