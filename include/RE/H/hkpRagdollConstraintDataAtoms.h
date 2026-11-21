#pragma once

#include "RE/H/hkpAngFrictionConstraintAtom.h"
#include "RE/H/hkpBallSocketConstraintAtom.h"
#include "RE/H/hkpConeLimitConstraintAtom.h"
#include "RE/H/hkpRagdollMotorConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"
#include "RE/H/hkpSetupStabilizationAtom.h"
#include "RE/H/hkpTwistLimitConstraintAtom.h"

namespace RE
{
	class hkpRagdollConstraintDataAtoms
	{
	public:

		enum class Axis : std::uint32_t
		{
			kAxisTwist = 0,
			kAxisPlanes = 1,
			kAxisCrossProduct = 2
		};

		// members
		hkpSetLocalTransformsConstraintAtom m_transforms;  // 0x00
		hkpSetupStabilizationAtom m_setupStabilization;    // 0x90
		hkpRagdollMotorConstraintAtom m_ragdollMotors;     // 0xA0
		hkpAngFrictionConstraintAtom m_angFriction;        // 0x100
		hkpTwistLimitConstraintAtom m_twistLimit;          // 0x110
		hkpConeLimitConstraintAtom m_coneLimit;            // 0x130
		hkpConeLimitConstraintAtom m_planesLimit;          // 0x150
		hkpBallSocketConstraintAtom m_ballSocket;          // 0x170
	};
	static_assert(sizeof(hkpRagdollConstraintDataAtoms) == 0x180);
	static_assert(offsetof(hkpRagdollConstraintDataAtoms, m_transforms) == 0x0);
	static_assert(offsetof(hkpRagdollConstraintDataAtoms, m_setupStabilization) == 0x90);
	static_assert(offsetof(hkpRagdollConstraintDataAtoms, m_ragdollMotors) == 0xA0);
	static_assert(offsetof(hkpRagdollConstraintDataAtoms, m_angFriction) == 0x100);
	static_assert(offsetof(hkpRagdollConstraintDataAtoms, m_twistLimit) == 0x110);
	static_assert(offsetof(hkpRagdollConstraintDataAtoms, m_coneLimit) == 0x130);
	static_assert(offsetof(hkpRagdollConstraintDataAtoms, m_planesLimit) == 0x150);
	static_assert(offsetof(hkpRagdollConstraintDataAtoms, m_ballSocket) == 0x170);
}
