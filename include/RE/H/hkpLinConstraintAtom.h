#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpLinConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t m_axisIndex;    // 0x02
		std::uint8_t m_padding[12];  // 0x03
	};
	static_assert(sizeof(hkpLinConstraintAtom) == 0x10);
	static_assert(offsetof(hkpLinConstraintAtom, m_axisIndex) == 0x2);
	static_assert(offsetof(hkpLinConstraintAtom, m_padding) == 0x3);
}
