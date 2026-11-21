#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpCogWheelConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t unk02[0x2];                      // 0x02
		float m_cogWheelRadiusA;                      // 0x04
		float m_cogWheelRadiusB;                      // 0x08
		bool m_isScrew;                               // 0x0C
		std::int8_t m_memOffsetToInitialAngleOffset;  // 0x0D
		std::int8_t m_memOffsetToPrevAngle;           // 0x0E
		std::int8_t m_memOffsetToRevolutionCounter;   // 0x0F
	};
	static_assert(sizeof(hkpCogWheelConstraintAtom) == 0x10);
	static_assert(offsetof(hkpCogWheelConstraintAtom, m_cogWheelRadiusA) == 0x4);
	static_assert(offsetof(hkpCogWheelConstraintAtom, m_cogWheelRadiusB) == 0x8);
	static_assert(offsetof(hkpCogWheelConstraintAtom, m_isScrew) == 0xC);
	static_assert(offsetof(hkpCogWheelConstraintAtom, m_memOffsetToInitialAngleOffset) == 0xD);
	static_assert(offsetof(hkpCogWheelConstraintAtom, m_memOffsetToPrevAngle) == 0xE);
	static_assert(offsetof(hkpCogWheelConstraintAtom, m_memOffsetToRevolutionCounter) == 0xF);
}
