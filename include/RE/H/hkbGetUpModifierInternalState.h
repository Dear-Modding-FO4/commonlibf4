#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbGetUpModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbGetUpModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbGetUpModifierInternalState };

		// members
		float m_timeSinceBegin;  // 0x10
		float m_timeStep;        // 0x14
		bool m_initNextModify;   // 0x18
	};
	static_assert(sizeof(hkbGetUpModifierInternalState) == 0x20);
	static_assert(offsetof(hkbGetUpModifierInternalState, m_timeSinceBegin) == 0x10);
	static_assert(offsetof(hkbGetUpModifierInternalState, m_timeStep) == 0x14);
	static_assert(offsetof(hkbGetUpModifierInternalState, m_initNextModify) == 0x18);
}
