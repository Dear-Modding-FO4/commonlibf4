#pragma once

#include "RE/H/hkp2dAngConstraintAtom.h"
#include "RE/H/hkpAngFrictionConstraintAtom.h"
#include "RE/H/hkpAngLimitConstraintAtom.h"
#include "RE/H/hkpAngMotorConstraintAtom.h"
#include "RE/H/hkpBallSocketConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"
#include "RE/H/hkpSetupStabilizationAtom.h"

namespace RE
{
	class hkpLimitedHingeConstraintDataAtoms
	{
	public:

		enum class Axis : std::uint32_t
		{
			kAxisAxle = 0,
			kAxisPerpToAxle1 = 1,
			kAxisPerpToAxle2 = 2
		};

		// members
		hkpSetLocalTransformsConstraintAtom m_transforms;  // 0x00
		hkpSetupStabilizationAtom m_setupStabilization;    // 0x90
		hkpAngMotorConstraintAtom m_angMotor;              // 0xA0
		hkpAngFrictionConstraintAtom m_angFriction;        // 0xC8
		hkpAngLimitConstraintAtom m_angLimit;              // 0xD8
		hkp2dAngConstraintAtom m_2dAng;                    // 0xE8
		hkpBallSocketConstraintAtom m_ballSocket;          // 0xF8
	};
	static_assert(sizeof(hkpLimitedHingeConstraintDataAtoms) == 0x110);
	static_assert(offsetof(hkpLimitedHingeConstraintDataAtoms, m_transforms) == 0x0);
	static_assert(offsetof(hkpLimitedHingeConstraintDataAtoms, m_setupStabilization) == 0x90);
	static_assert(offsetof(hkpLimitedHingeConstraintDataAtoms, m_angMotor) == 0xA0);
	static_assert(offsetof(hkpLimitedHingeConstraintDataAtoms, m_angFriction) == 0xC8);
	static_assert(offsetof(hkpLimitedHingeConstraintDataAtoms, m_angLimit) == 0xD8);
	static_assert(offsetof(hkpLimitedHingeConstraintDataAtoms, m_2dAng) == 0xE8);
	static_assert(offsetof(hkpLimitedHingeConstraintDataAtoms, m_ballSocket) == 0xF8);
}
