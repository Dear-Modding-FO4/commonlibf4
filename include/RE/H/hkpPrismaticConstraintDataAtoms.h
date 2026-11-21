#pragma once

#include "RE/H/hkpAngConstraintAtom.h"
#include "RE/H/hkpLinConstraintAtom.h"
#include "RE/H/hkpLinFrictionConstraintAtom.h"
#include "RE/H/hkpLinLimitConstraintAtom.h"
#include "RE/H/hkpLinMotorConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"

namespace RE
{
	class hkpPrismaticConstraintDataAtoms
	{
	public:

		enum class Axis : std::uint32_t
		{
			kAxisShaft = 0,
			kAxisPerpToShaft = 1
		};

		// members
		hkpSetLocalTransformsConstraintAtom m_transforms;  // 0x00
		hkpLinMotorConstraintAtom m_motor;                 // 0x90
		hkpLinFrictionConstraintAtom m_friction;           // 0xA8
		hkpAngConstraintAtom m_ang;                        // 0xB8
		hkpLinConstraintAtom m_lin0;                       // 0xC8
		hkpLinConstraintAtom m_lin1;                       // 0xD8
		hkpLinLimitConstraintAtom m_linLimit;              // 0xE8
	};
	static_assert(sizeof(hkpPrismaticConstraintDataAtoms) == 0x100);
	static_assert(offsetof(hkpPrismaticConstraintDataAtoms, m_transforms) == 0x0);
	static_assert(offsetof(hkpPrismaticConstraintDataAtoms, m_motor) == 0x90);
	static_assert(offsetof(hkpPrismaticConstraintDataAtoms, m_friction) == 0xA8);
	static_assert(offsetof(hkpPrismaticConstraintDataAtoms, m_ang) == 0xB8);
	static_assert(offsetof(hkpPrismaticConstraintDataAtoms, m_lin0) == 0xC8);
	static_assert(offsetof(hkpPrismaticConstraintDataAtoms, m_lin1) == 0xD8);
	static_assert(offsetof(hkpPrismaticConstraintDataAtoms, m_linLimit) == 0xE8);
}
