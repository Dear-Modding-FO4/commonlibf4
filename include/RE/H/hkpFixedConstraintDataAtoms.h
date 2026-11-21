#pragma once

#include "RE/H/hkp3dAngConstraintAtom.h"
#include "RE/H/hkpBallSocketConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"
#include "RE/H/hkpSetupStabilizationAtom.h"

namespace RE
{
	class hkpFixedConstraintDataAtoms
	{
	public:

		// members
		hkpSetLocalTransformsConstraintAtom m_transforms;  // 0x00
		hkpSetupStabilizationAtom m_setupStabilization;    // 0x90
		hkpBallSocketConstraintAtom m_ballSocket;          // 0xA0
		hkp3dAngConstraintAtom m_ang;                      // 0xB0
	};
	static_assert(sizeof(hkpFixedConstraintDataAtoms) == 0xC0);
	static_assert(offsetof(hkpFixedConstraintDataAtoms, m_transforms) == 0x0);
	static_assert(offsetof(hkpFixedConstraintDataAtoms, m_setupStabilization) == 0x90);
	static_assert(offsetof(hkpFixedConstraintDataAtoms, m_ballSocket) == 0xA0);
	static_assert(offsetof(hkpFixedConstraintDataAtoms, m_ang) == 0xB0);
}
