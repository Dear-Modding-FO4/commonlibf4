#pragma once

#include "RE/H/hkbRadialSelectorGeneratorGeneratorInfo.h"

namespace RE
{
	class hkbRadialSelectorGeneratorGeneratorPair
	{
	public:

		// members
		hkbRadialSelectorGeneratorGeneratorInfo m_generators[2];  // 0x00
		float m_minAngle;                                         // 0x20
		float m_maxAngle;                                         // 0x24
	};
	static_assert(sizeof(hkbRadialSelectorGeneratorGeneratorPair) == 0x28);
	static_assert(offsetof(hkbRadialSelectorGeneratorGeneratorPair, m_generators) == 0x0);
	static_assert(offsetof(hkbRadialSelectorGeneratorGeneratorPair, m_minAngle) == 0x20);
	static_assert(offsetof(hkbRadialSelectorGeneratorGeneratorPair, m_maxAngle) == 0x24);
}
