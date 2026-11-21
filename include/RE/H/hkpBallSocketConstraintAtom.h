#pragma once

#include "RE/H/hkUFloat8.h"
#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpBallSocketConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t m_solvingMethod;             // 0x02
		std::uint8_t m_bodiesToNotify;            // 0x03
		hkUFloat8 m_velocityStabilizationFactor;  // 0x04
		bool m_enableLinearImpulseLimit;          // 0x05
		std::uint8_t unk06[0x2];                  // 0x06
		float m_breachImpulse;                    // 0x08
		float m_inertiaStabilizationFactor;       // 0x0C
	};
	static_assert(sizeof(hkpBallSocketConstraintAtom) == 0x10);
	static_assert(offsetof(hkpBallSocketConstraintAtom, m_solvingMethod) == 0x2);
	static_assert(offsetof(hkpBallSocketConstraintAtom, m_bodiesToNotify) == 0x3);
	static_assert(offsetof(hkpBallSocketConstraintAtom, m_velocityStabilizationFactor) == 0x4);
	static_assert(offsetof(hkpBallSocketConstraintAtom, m_enableLinearImpulseLimit) == 0x5);
	static_assert(offsetof(hkpBallSocketConstraintAtom, m_breachImpulse) == 0x8);
	static_assert(offsetof(hkpBallSocketConstraintAtom, m_inertiaStabilizationFactor) == 0xC);
}
