#pragma once

#include "RE/H/hkbModifierWrapper.h"

namespace RE
{
	class __declspec(novtable) hkbEventDrivenModifier :
		public hkbModifierWrapper  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEventDrivenModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbEventDrivenModifier };

		// members
		std::int32_t m_activateEventId;    // 0x60
		std::int32_t m_deactivateEventId;  // 0x64
		bool m_activeByDefault;            // 0x68
		bool m_isActive;                   // 0x69
	};
	static_assert(sizeof(hkbEventDrivenModifier) == 0x70);
	static_assert(offsetof(hkbEventDrivenModifier, m_activateEventId) == 0x60);
	static_assert(offsetof(hkbEventDrivenModifier, m_deactivateEventId) == 0x64);
	static_assert(offsetof(hkbEventDrivenModifier, m_activeByDefault) == 0x68);
	static_assert(offsetof(hkbEventDrivenModifier, m_isActive) == 0x69);
}
