#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbEventDrivenModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEventDrivenModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbEventDrivenModifierInternalState };

		// members
		bool m_isActive;  // 0x10
	};
	static_assert(sizeof(hkbEventDrivenModifierInternalState) == 0x18);
	static_assert(offsetof(hkbEventDrivenModifierInternalState, m_isActive) == 0x10);
}
