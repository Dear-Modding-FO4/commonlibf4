#pragma once

#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"
#include "RE/H/hkpWheelFrictionConstraintAtom.h"

namespace RE
{
	class hkpWheelFrictionConstraintDataAtoms
	{
	public:

		// members
		hkpSetLocalTransformsConstraintAtom m_transforms;  // 0x00
		hkpWheelFrictionConstraintAtom m_friction;         // 0x90
	};
	static_assert(sizeof(hkpWheelFrictionConstraintDataAtoms) == 0xC0);
	static_assert(offsetof(hkpWheelFrictionConstraintDataAtoms, m_transforms) == 0x0);
	static_assert(offsetof(hkpWheelFrictionConstraintDataAtoms, m_friction) == 0x90);
}
