#pragma once

#include "RE/H/hkbHandIkControlData.h"

namespace RE
{
	class hkbHandIkControlsModifierHand
	{
	public:

		// members
		hkbHandIkControlData m_controlData;  // 0x00
		std::int32_t m_handIndex;            // 0x60
		bool m_enable;                       // 0x64
	};
	static_assert(sizeof(hkbHandIkControlsModifierHand) == 0x70);
	static_assert(offsetof(hkbHandIkControlsModifierHand, m_controlData) == 0x0);
	static_assert(offsetof(hkbHandIkControlsModifierHand, m_handIndex) == 0x60);
	static_assert(offsetof(hkbHandIkControlsModifierHand, m_enable) == 0x64);
}
