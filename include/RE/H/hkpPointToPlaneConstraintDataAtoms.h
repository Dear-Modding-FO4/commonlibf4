#pragma once

#include "RE/H/hkpLinConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"

namespace RE
{
	class hkpPointToPlaneConstraintDataAtoms
	{
	public:

		// members
		hkpSetLocalTransformsConstraintAtom m_transforms;  // 0x00
		hkpLinConstraintAtom m_lin;                        // 0x90
	};
	static_assert(sizeof(hkpPointToPlaneConstraintDataAtoms) == 0xA0);
	static_assert(offsetof(hkpPointToPlaneConstraintDataAtoms, m_transforms) == 0x0);
	static_assert(offsetof(hkpPointToPlaneConstraintDataAtoms, m_lin) == 0x90);
}
