#pragma once

#include "RE/H/hkpDeformableAngConstraintAtom.h"
#include "RE/H/hkpDeformableLinConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"

namespace RE
{
	class hkpDeformableFixedConstraintDataAtoms
	{
	public:

		// members
		hkpSetLocalTransformsConstraintAtom m_transforms;  // 0x00
		hkpDeformableLinConstraintAtom m_lin;              // 0x90
		hkpDeformableAngConstraintAtom m_ang;              // 0xF0
	};
	static_assert(sizeof(hkpDeformableFixedConstraintDataAtoms) == 0x150);
	static_assert(offsetof(hkpDeformableFixedConstraintDataAtoms, m_transforms) == 0x0);
	static_assert(offsetof(hkpDeformableFixedConstraintDataAtoms, m_lin) == 0x90);
	static_assert(offsetof(hkpDeformableFixedConstraintDataAtoms, m_ang) == 0xF0);
}
