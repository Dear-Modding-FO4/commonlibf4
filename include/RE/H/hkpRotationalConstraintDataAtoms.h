#pragma once

#include "RE/H/hkpAngConstraintAtom.h"
#include "RE/H/hkpSetLocalRotationsConstraintAtom.h"

namespace RE
{
	class hkpRotationalConstraintDataAtoms
	{
	public:

		// members
		hkpSetLocalRotationsConstraintAtom m_rotations;  // 0x00
		hkpAngConstraintAtom m_ang;                      // 0x70
	};
	static_assert(sizeof(hkpRotationalConstraintDataAtoms) == 0x80);
	static_assert(offsetof(hkpRotationalConstraintDataAtoms, m_rotations) == 0x0);
	static_assert(offsetof(hkpRotationalConstraintDataAtoms, m_ang) == 0x70);
}
