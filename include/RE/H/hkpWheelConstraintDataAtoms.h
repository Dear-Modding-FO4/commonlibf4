#pragma once

#include "RE/H/hkp2dAngConstraintAtom.h"
#include "RE/H/hkpLinConstraintAtom.h"
#include "RE/H/hkpLinLimitConstraintAtom.h"
#include "RE/H/hkpLinSoftConstraintAtom.h"
#include "RE/H/hkpSetLocalRotationsConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"

namespace RE
{
	class hkpWheelConstraintDataAtoms
	{
	public:

		enum class Axis : std::uint32_t
		{
			kAxisSuspension = 0,
			kAxisPerpSuspension = 1,
			kAxisAxle = 0,
			kAxisSteering = 1
		};

		// members
		hkpSetLocalTransformsConstraintAtom m_suspensionBase;  // 0x00
		hkpLinLimitConstraintAtom m_lin0Limit;                 // 0x90
		hkpLinSoftConstraintAtom m_lin0Soft;                   // 0xA0
		hkpLinConstraintAtom m_lin1;                           // 0xB0
		hkpLinConstraintAtom m_lin2;                           // 0xC0
		hkpSetLocalRotationsConstraintAtom m_steeringBase;     // 0xD0
		hkp2dAngConstraintAtom m_2dAng;                        // 0x140
	};
	static_assert(sizeof(hkpWheelConstraintDataAtoms) == 0x150);
	static_assert(offsetof(hkpWheelConstraintDataAtoms, m_suspensionBase) == 0x0);
	static_assert(offsetof(hkpWheelConstraintDataAtoms, m_lin0Limit) == 0x90);
	static_assert(offsetof(hkpWheelConstraintDataAtoms, m_lin0Soft) == 0xA0);
	static_assert(offsetof(hkpWheelConstraintDataAtoms, m_lin1) == 0xB0);
	static_assert(offsetof(hkpWheelConstraintDataAtoms, m_lin2) == 0xC0);
	static_assert(offsetof(hkpWheelConstraintDataAtoms, m_steeringBase) == 0xD0);
	static_assert(offsetof(hkpWheelConstraintDataAtoms, m_2dAng) == 0x140);
}
