#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbTimerModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbTimerModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbTimerModifierInternalState };

		// members
		float m_secondsElapsed;  // 0x10
	};
	static_assert(sizeof(hkbTimerModifierInternalState) == 0x18);
	static_assert(offsetof(hkbTimerModifierInternalState, m_secondsElapsed) == 0x10);
}
