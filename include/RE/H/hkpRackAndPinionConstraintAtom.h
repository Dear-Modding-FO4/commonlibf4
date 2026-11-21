#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpRackAndPinionConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t unk02[0x2];                      // 0x02
		float m_pinionRadiusOrScrewPitch;             // 0x04
		bool m_isScrew;                               // 0x08
		std::int8_t m_memOffsetToInitialAngleOffset;  // 0x09
		std::int8_t m_memOffsetToPrevAngle;           // 0x0A
		std::int8_t m_memOffsetToRevolutionCounter;   // 0x0B
		std::uint8_t m_padding[4];                    // 0x0C
	};
	static_assert(sizeof(hkpRackAndPinionConstraintAtom) == 0x10);
	static_assert(offsetof(hkpRackAndPinionConstraintAtom, m_pinionRadiusOrScrewPitch) == 0x4);
	static_assert(offsetof(hkpRackAndPinionConstraintAtom, m_isScrew) == 0x8);
	static_assert(offsetof(hkpRackAndPinionConstraintAtom, m_memOffsetToInitialAngleOffset) == 0x9);
	static_assert(offsetof(hkpRackAndPinionConstraintAtom, m_memOffsetToPrevAngle) == 0xA);
	static_assert(offsetof(hkpRackAndPinionConstraintAtom, m_memOffsetToRevolutionCounter) == 0xB);
	static_assert(offsetof(hkpRackAndPinionConstraintAtom, m_padding) == 0xC);
}
