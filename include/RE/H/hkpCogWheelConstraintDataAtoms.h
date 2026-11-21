#pragma once

#include "RE/H/hkpCogWheelConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"

namespace RE
{
	class hkpCogWheelConstraintDataAtoms
	{
	public:

		// members
		hkpSetLocalTransformsConstraintAtom m_transforms;  // 0x00
		hkpCogWheelConstraintAtom m_cogWheels;             // 0x90
	};
	static_assert(sizeof(hkpCogWheelConstraintDataAtoms) == 0xA0);
	static_assert(offsetof(hkpCogWheelConstraintDataAtoms, m_transforms) == 0x0);
	static_assert(offsetof(hkpCogWheelConstraintDataAtoms, m_cogWheels) == 0x90);
}
