#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpSetupStabilizationAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		bool m_enabled;             // 0x02
		std::uint8_t m_padding[1];  // 0x03
		float m_maxLinImpulse;      // 0x04
		float m_maxAngImpulse;      // 0x08
		float m_maxAngle;           // 0x0C
	};
	static_assert(sizeof(hkpSetupStabilizationAtom) == 0x10);
	static_assert(offsetof(hkpSetupStabilizationAtom, m_enabled) == 0x2);
	static_assert(offsetof(hkpSetupStabilizationAtom, m_padding) == 0x3);
	static_assert(offsetof(hkpSetupStabilizationAtom, m_maxLinImpulse) == 0x4);
	static_assert(offsetof(hkpSetupStabilizationAtom, m_maxAngImpulse) == 0x8);
	static_assert(offsetof(hkpSetupStabilizationAtom, m_maxAngle) == 0xC);
}
