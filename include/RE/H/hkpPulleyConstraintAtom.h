#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpPulleyConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t unk02[0xE];          // 0x02
		hkVector4f m_fixedPivotAinWorld;  // 0x10
		hkVector4f m_fixedPivotBinWorld;  // 0x20
		float m_ropeLength;               // 0x30
		float m_leverageOnBodyB;          // 0x34
	};
	static_assert(sizeof(hkpPulleyConstraintAtom) == 0x40);
	static_assert(offsetof(hkpPulleyConstraintAtom, m_fixedPivotAinWorld) == 0x10);
	static_assert(offsetof(hkpPulleyConstraintAtom, m_fixedPivotBinWorld) == 0x20);
	static_assert(offsetof(hkpPulleyConstraintAtom, m_ropeLength) == 0x30);
	static_assert(offsetof(hkpPulleyConstraintAtom, m_leverageOnBodyB) == 0x34);
}
