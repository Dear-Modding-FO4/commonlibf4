#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpDeformableAngConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t unk02[0xE];               // 0x02
		hkQuaternionf m_offset;                // 0x10
		hkVector4f m_yieldStrengthDiag;        // 0x20
		hkVector4f m_yieldStrengthOffDiag;     // 0x30
		hkVector4f m_ultimateStrengthDiag;     // 0x40
		hkVector4f m_ultimateStrengthOffDiag;  // 0x50
	};
	static_assert(sizeof(hkpDeformableAngConstraintAtom) == 0x60);
	static_assert(offsetof(hkpDeformableAngConstraintAtom, m_offset) == 0x10);
	static_assert(offsetof(hkpDeformableAngConstraintAtom, m_yieldStrengthDiag) == 0x20);
	static_assert(offsetof(hkpDeformableAngConstraintAtom, m_yieldStrengthOffDiag) == 0x30);
	static_assert(offsetof(hkpDeformableAngConstraintAtom, m_ultimateStrengthDiag) == 0x40);
	static_assert(offsetof(hkpDeformableAngConstraintAtom, m_ultimateStrengthOffDiag) == 0x50);
}
