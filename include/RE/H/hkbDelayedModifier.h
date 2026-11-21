#pragma once

#include "RE/H/hkbModifierWrapper.h"

namespace RE
{
	class __declspec(novtable) hkbDelayedModifier :
		public hkbModifierWrapper  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbDelayedModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbDelayedModifier };

		// members
		float m_delaySeconds;     // 0x60
		float m_durationSeconds;  // 0x64
		float m_secondsElapsed;   // 0x68
		bool m_isActive;          // 0x6C
	};
	static_assert(sizeof(hkbDelayedModifier) == 0x70);
	static_assert(offsetof(hkbDelayedModifier, m_delaySeconds) == 0x60);
	static_assert(offsetof(hkbDelayedModifier, m_durationSeconds) == 0x64);
	static_assert(offsetof(hkbDelayedModifier, m_secondsElapsed) == 0x68);
	static_assert(offsetof(hkbDelayedModifier, m_isActive) == 0x6C);
}
