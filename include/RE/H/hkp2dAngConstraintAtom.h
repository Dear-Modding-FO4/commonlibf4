#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkp2dAngConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t m_freeRotationAxis;  // 0x02
		std::uint8_t m_padding[12];       // 0x03
	};
	static_assert(sizeof(hkp2dAngConstraintAtom) == 0x10);
	static_assert(offsetof(hkp2dAngConstraintAtom, m_freeRotationAxis) == 0x2);
	static_assert(offsetof(hkp2dAngConstraintAtom, m_padding) == 0x3);
}
