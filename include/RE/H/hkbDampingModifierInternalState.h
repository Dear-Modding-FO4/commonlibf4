#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbDampingModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbDampingModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbDampingModifierInternalState };

		// members
		hkVector4f m_dampedVector;      // 0x10
		hkVector4f m_vecErrorSum;       // 0x20
		hkVector4f m_vecPreviousError;  // 0x30
		float m_dampedValue;            // 0x40
		float m_errorSum;               // 0x44
		float m_previousError;          // 0x48
	};
	static_assert(sizeof(hkbDampingModifierInternalState) == 0x50);
	static_assert(offsetof(hkbDampingModifierInternalState, m_dampedVector) == 0x10);
	static_assert(offsetof(hkbDampingModifierInternalState, m_vecErrorSum) == 0x20);
	static_assert(offsetof(hkbDampingModifierInternalState, m_vecPreviousError) == 0x30);
	static_assert(offsetof(hkbDampingModifierInternalState, m_dampedValue) == 0x40);
	static_assert(offsetof(hkbDampingModifierInternalState, m_errorSum) == 0x44);
	static_assert(offsetof(hkbDampingModifierInternalState, m_previousError) == 0x48);
}
