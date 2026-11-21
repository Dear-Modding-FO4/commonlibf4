#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpLinSoftConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t m_axisIndex;   // 0x02
		std::uint8_t unk03[0x1];    // 0x03
		float m_tau;                // 0x04
		float m_damping;            // 0x08
		std::uint8_t m_padding[4];  // 0x0C
	};
	static_assert(sizeof(hkpLinSoftConstraintAtom) == 0x10);
	static_assert(offsetof(hkpLinSoftConstraintAtom, m_axisIndex) == 0x2);
	static_assert(offsetof(hkpLinSoftConstraintAtom, m_tau) == 0x4);
	static_assert(offsetof(hkpLinSoftConstraintAtom, m_damping) == 0x8);
	static_assert(offsetof(hkpLinSoftConstraintAtom, m_padding) == 0xC);
}
