#pragma once

#include "RE/H/hkpConeLimitConstraintAtom.h"
#include "RE/H/hkpSetLocalRotationsConstraintAtom.h"
#include "RE/H/hkpTwistLimitConstraintAtom.h"

namespace RE
{
	class hkpRagdollLimitsDataAtoms
	{
	public:

		enum class Axis : std::uint32_t
		{
			kAxisTwist = 0,
			kAxisPlanes = 1,
			kAxisCrossProduct = 2
		};

		// members
		hkpSetLocalRotationsConstraintAtom m_rotations;  // 0x00
		hkpTwistLimitConstraintAtom m_twistLimit;        // 0x70
		hkpConeLimitConstraintAtom m_coneLimit;          // 0x90
		hkpConeLimitConstraintAtom m_planesLimit;        // 0xB0
	};
	static_assert(sizeof(hkpRagdollLimitsDataAtoms) == 0xD0);
	static_assert(offsetof(hkpRagdollLimitsDataAtoms, m_rotations) == 0x0);
	static_assert(offsetof(hkpRagdollLimitsDataAtoms, m_twistLimit) == 0x70);
	static_assert(offsetof(hkpRagdollLimitsDataAtoms, m_coneLimit) == 0x90);
	static_assert(offsetof(hkpRagdollLimitsDataAtoms, m_planesLimit) == 0xB0);
}
