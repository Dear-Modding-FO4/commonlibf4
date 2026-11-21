#pragma once

#include "RE/H/hkMatrix3.h"
#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpConstraintMotor;

	class hkpRagdollMotorConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		bool m_isEnabled;                           // 0x02
		std::uint8_t unk03[0x1];                    // 0x03
		std::int16_t m_initializedOffset;           // 0x04
		std::int16_t m_previousTargetAnglesOffset;  // 0x06
		std::uint8_t unk08[0x8];                    // 0x08
		hkMatrix3f m_target_bRca;                   // 0x10
		hkpConstraintMotor* m_motors[3];            // 0x40
	};
	static_assert(sizeof(hkpRagdollMotorConstraintAtom) == 0x60);
	static_assert(offsetof(hkpRagdollMotorConstraintAtom, m_isEnabled) == 0x2);
	static_assert(offsetof(hkpRagdollMotorConstraintAtom, m_initializedOffset) == 0x4);
	static_assert(offsetof(hkpRagdollMotorConstraintAtom, m_previousTargetAnglesOffset) == 0x6);
	static_assert(offsetof(hkpRagdollMotorConstraintAtom, m_target_bRca) == 0x10);
	static_assert(offsetof(hkpRagdollMotorConstraintAtom, m_motors) == 0x40);
}
