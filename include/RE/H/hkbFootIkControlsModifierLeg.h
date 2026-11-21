#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkbEventProperty.h"

namespace RE
{
	class hkbFootIkControlsModifierLeg
	{
	public:

		// members
		hkVector4f m_groundPosition;         // 0x00
		hkbEventProperty m_ungroundedEvent;  // 0x10
		float m_verticalError;               // 0x20
		bool m_hitSomething;                 // 0x24
		bool m_isPlantedMS;                  // 0x25
		bool m_enabled;                      // 0x26
	};
	static_assert(sizeof(hkbFootIkControlsModifierLeg) == 0x30);
	static_assert(offsetof(hkbFootIkControlsModifierLeg, m_groundPosition) == 0x0);
	static_assert(offsetof(hkbFootIkControlsModifierLeg, m_ungroundedEvent) == 0x10);
	static_assert(offsetof(hkbFootIkControlsModifierLeg, m_verticalError) == 0x20);
	static_assert(offsetof(hkbFootIkControlsModifierLeg, m_hitSomething) == 0x24);
	static_assert(offsetof(hkbFootIkControlsModifierLeg, m_isPlantedMS) == 0x25);
	static_assert(offsetof(hkbFootIkControlsModifierLeg, m_enabled) == 0x26);
}
