#pragma once

#include "RE/H/hkp2dAngConstraintAtom.h"
#include "RE/H/hkpBallSocketConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"
#include "RE/H/hkpSetupStabilizationAtom.h"

namespace RE
{
	class hkpHingeConstraintDataAtoms
	{
	public:

		enum class Axis : std::uint32_t
		{
			kAxisAxle = 0
		};

		// members
		hkpSetLocalTransformsConstraintAtom m_transforms;  // 0x00
		hkpSetupStabilizationAtom m_setupStabilization;    // 0x90
		hkp2dAngConstraintAtom m_2dAng;                    // 0xA0
		hkpBallSocketConstraintAtom m_ballSocket;          // 0xB0
	};
	static_assert(sizeof(hkpHingeConstraintDataAtoms) == 0xC0);
	static_assert(offsetof(hkpHingeConstraintDataAtoms, m_transforms) == 0x0);
	static_assert(offsetof(hkpHingeConstraintDataAtoms, m_setupStabilization) == 0x90);
	static_assert(offsetof(hkpHingeConstraintDataAtoms, m_2dAng) == 0xA0);
	static_assert(offsetof(hkpHingeConstraintDataAtoms, m_ballSocket) == 0xB0);
}
