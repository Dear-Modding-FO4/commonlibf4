#pragma once

#include "RE/H/hkpAngConstraintAtom.h"
#include "RE/H/hkpLinFrictionConstraintAtom.h"
#include "RE/H/hkpLinLimitConstraintAtom.h"
#include "RE/H/hkpLinMotorConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"

namespace RE
{
	class hkpLinearClearanceConstraintDataAtoms
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
		hkpLinFrictionConstraintAtom m_friction0;          // 0xA8
		hkpLinFrictionConstraintAtom m_friction1;          // 0xB8
		hkpLinFrictionConstraintAtom m_friction2;          // 0xC8
		hkpAngConstraintAtom m_ang;                        // 0xD8
		hkpLinLimitConstraintAtom m_linLimit0;             // 0xE8
		hkpLinLimitConstraintAtom m_linLimit1;             // 0xF8
		hkpLinLimitConstraintAtom m_linLimit2;             // 0x108
	};
	static_assert(sizeof(hkpLinearClearanceConstraintDataAtoms) == 0x120);
	static_assert(offsetof(hkpLinearClearanceConstraintDataAtoms, m_transforms) == 0x0);
	static_assert(offsetof(hkpLinearClearanceConstraintDataAtoms, m_motor) == 0x90);
	static_assert(offsetof(hkpLinearClearanceConstraintDataAtoms, m_friction0) == 0xA8);
	static_assert(offsetof(hkpLinearClearanceConstraintDataAtoms, m_friction1) == 0xB8);
	static_assert(offsetof(hkpLinearClearanceConstraintDataAtoms, m_friction2) == 0xC8);
	static_assert(offsetof(hkpLinearClearanceConstraintDataAtoms, m_ang) == 0xD8);
	static_assert(offsetof(hkpLinearClearanceConstraintDataAtoms, m_linLimit0) == 0xE8);
	static_assert(offsetof(hkpLinearClearanceConstraintDataAtoms, m_linLimit1) == 0xF8);
	static_assert(offsetof(hkpLinearClearanceConstraintDataAtoms, m_linLimit2) == 0x108);
}
