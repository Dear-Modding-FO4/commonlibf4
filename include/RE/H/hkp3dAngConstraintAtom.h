#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkp3dAngConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t m_padding[14];  // 0x02
	};
	static_assert(sizeof(hkp3dAngConstraintAtom) == 0x10);
	static_assert(offsetof(hkp3dAngConstraintAtom, m_padding) == 0x2);
}
