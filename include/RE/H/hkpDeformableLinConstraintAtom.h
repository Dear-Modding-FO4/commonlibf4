#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpDeformableLinConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t unk02[0xE];               // 0x02
		hkVector4f m_offset;                   // 0x10
		hkVector4f m_yieldStrengthDiag;        // 0x20
		hkVector4f m_yieldStrengthOffDiag;     // 0x30
		hkVector4f m_ultimateStrengthDiag;     // 0x40
		hkVector4f m_ultimateStrengthOffDiag;  // 0x50
	};
	static_assert(sizeof(hkpDeformableLinConstraintAtom) == 0x60);
	static_assert(offsetof(hkpDeformableLinConstraintAtom, m_offset) == 0x10);
	static_assert(offsetof(hkpDeformableLinConstraintAtom, m_yieldStrengthDiag) == 0x20);
	static_assert(offsetof(hkpDeformableLinConstraintAtom, m_yieldStrengthOffDiag) == 0x30);
	static_assert(offsetof(hkpDeformableLinConstraintAtom, m_ultimateStrengthDiag) == 0x40);
	static_assert(offsetof(hkpDeformableLinConstraintAtom, m_ultimateStrengthOffDiag) == 0x50);
}
