#pragma once

#include "RE/H/hkpBallSocketConstraintAtom.h"
#include "RE/H/hkpSetLocalTranslationsConstraintAtom.h"
#include "RE/H/hkpSetupStabilizationAtom.h"

namespace RE
{
	class hkpBallAndSocketConstraintDataAtoms
	{
	public:

		// members
		hkpSetLocalTranslationsConstraintAtom m_pivots;  // 0x00
		hkpSetupStabilizationAtom m_setupStabilization;  // 0x30
		hkpBallSocketConstraintAtom m_ballSocket;        // 0x40
	};
	static_assert(sizeof(hkpBallAndSocketConstraintDataAtoms) == 0x50);
	static_assert(offsetof(hkpBallAndSocketConstraintDataAtoms, m_pivots) == 0x0);
	static_assert(offsetof(hkpBallAndSocketConstraintDataAtoms, m_setupStabilization) == 0x30);
	static_assert(offsetof(hkpBallAndSocketConstraintDataAtoms, m_ballSocket) == 0x40);
}
