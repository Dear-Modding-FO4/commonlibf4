#pragma once

#include "RE/H/hkpRackAndPinionConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"

namespace RE
{
	class hkpRackAndPinionConstraintDataAtoms
	{
	public:

		// members
		hkpSetLocalTransformsConstraintAtom m_transforms;  // 0x00
		hkpRackAndPinionConstraintAtom m_rackAndPinion;    // 0x90
	};
	static_assert(sizeof(hkpRackAndPinionConstraintDataAtoms) == 0xA0);
	static_assert(offsetof(hkpRackAndPinionConstraintDataAtoms, m_transforms) == 0x0);
	static_assert(offsetof(hkpRackAndPinionConstraintDataAtoms, m_rackAndPinion) == 0x90);
}
