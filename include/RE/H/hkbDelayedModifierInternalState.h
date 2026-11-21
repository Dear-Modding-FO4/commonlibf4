#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbDelayedModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbDelayedModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbDelayedModifierInternalState };

		// members
		float m_secondsElapsed;  // 0x10
		bool m_isActive;         // 0x14
	};
	static_assert(sizeof(hkbDelayedModifierInternalState) == 0x18);
	static_assert(offsetof(hkbDelayedModifierInternalState, m_secondsElapsed) == 0x10);
	static_assert(offsetof(hkbDelayedModifierInternalState, m_isActive) == 0x14);
}
