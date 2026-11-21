#pragma once

#include "RE/H/hkEnum.h"
#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpConeLimitConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		enum class MeasurementMode : std::uint8_t
		{
			kZeroWhenVectorsAligned = 0,
			kZeroWhenVectorsPerpendicular = 1
		};

		// members
		std::uint8_t m_isEnabled;                                      // 0x02
		std::uint8_t m_twistAxisInA;                                   // 0x03
		std::uint8_t m_refAxisInB;                                     // 0x04
		hkEnum<MeasurementMode, std::uint8_t> m_angleMeasurementMode;  // 0x05
		std::uint8_t m_memOffsetToAngleOffset;                         // 0x06
		std::uint8_t unk07[0x1];                                       // 0x07
		float m_minAngle;                                              // 0x08
		float m_maxAngle;                                              // 0x0C
		float m_angularLimitsTauFactor;                                // 0x10
		std::uint8_t m_padding[12];                                    // 0x14
	};
	static_assert(sizeof(hkpConeLimitConstraintAtom) == 0x20);
	static_assert(offsetof(hkpConeLimitConstraintAtom, m_isEnabled) == 0x2);
	static_assert(offsetof(hkpConeLimitConstraintAtom, m_twistAxisInA) == 0x3);
	static_assert(offsetof(hkpConeLimitConstraintAtom, m_refAxisInB) == 0x4);
	static_assert(offsetof(hkpConeLimitConstraintAtom, m_angleMeasurementMode) == 0x5);
	static_assert(offsetof(hkpConeLimitConstraintAtom, m_memOffsetToAngleOffset) == 0x6);
	static_assert(offsetof(hkpConeLimitConstraintAtom, m_minAngle) == 0x8);
	static_assert(offsetof(hkpConeLimitConstraintAtom, m_maxAngle) == 0xC);
	static_assert(offsetof(hkpConeLimitConstraintAtom, m_angularLimitsTauFactor) == 0x10);
	static_assert(offsetof(hkpConeLimitConstraintAtom, m_padding) == 0x14);
}
