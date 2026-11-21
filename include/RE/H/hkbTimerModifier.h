#pragma once

#include "RE/H/hkbEventProperty.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbTimerModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbTimerModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbTimerModifier };

		// members
		float m_alarmTimeSeconds;       // 0x58
		std::uint8_t pad5C[0x4];        // 0x5C
		hkbEventProperty m_alarmEvent;  // 0x60
		float m_secondsElapsed;         // 0x70
	};
	static_assert(sizeof(hkbTimerModifier) == 0x78);
	static_assert(offsetof(hkbTimerModifier, m_alarmTimeSeconds) == 0x58);
	static_assert(offsetof(hkbTimerModifier, m_alarmEvent) == 0x60);
	static_assert(offsetof(hkbTimerModifier, m_secondsElapsed) == 0x70);
}
