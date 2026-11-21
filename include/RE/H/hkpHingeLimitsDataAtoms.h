#pragma once

#include "RE/H/hkp2dAngConstraintAtom.h"
#include "RE/H/hkpAngLimitConstraintAtom.h"
#include "RE/H/hkpSetLocalRotationsConstraintAtom.h"

namespace RE
{
	class hkpHingeLimitsDataAtoms
	{
	public:

		enum class Axis : std::uint32_t
		{
			kAxisAxle = 0,
			kAxisPerpToAxle1 = 1,
			kAxisPerpToAxle2 = 2
		};

		// members
		hkpSetLocalRotationsConstraintAtom m_rotations;  // 0x00
		hkpAngLimitConstraintAtom m_angLimit;            // 0x70
		hkp2dAngConstraintAtom m_2dAng;                  // 0x80
	};
	static_assert(sizeof(hkpHingeLimitsDataAtoms) == 0x90);
	static_assert(offsetof(hkpHingeLimitsDataAtoms, m_rotations) == 0x0);
	static_assert(offsetof(hkpHingeLimitsDataAtoms, m_angLimit) == 0x70);
	static_assert(offsetof(hkpHingeLimitsDataAtoms, m_2dAng) == 0x80);
}
