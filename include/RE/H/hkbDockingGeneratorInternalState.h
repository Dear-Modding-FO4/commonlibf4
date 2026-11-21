#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbDockingGeneratorInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbDockingGeneratorInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbDockingGeneratorInternalState };

		// members
		float m_localTime;               // 0x10
		float m_previousLocalTime;       // 0x14
		float m_intervalStartLocalTime;  // 0x18
		float m_intervalEndLocalTime;    // 0x1C
	};
	static_assert(sizeof(hkbDockingGeneratorInternalState) == 0x20);
	static_assert(offsetof(hkbDockingGeneratorInternalState, m_localTime) == 0x10);
	static_assert(offsetof(hkbDockingGeneratorInternalState, m_previousLocalTime) == 0x14);
	static_assert(offsetof(hkbDockingGeneratorInternalState, m_intervalStartLocalTime) == 0x18);
	static_assert(offsetof(hkbDockingGeneratorInternalState, m_intervalEndLocalTime) == 0x1C);
}
