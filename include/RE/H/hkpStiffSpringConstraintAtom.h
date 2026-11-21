#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpStiffSpringConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t unk02[0x2];  // 0x02
		float m_length;           // 0x04
		float m_maxLength;        // 0x08
	};
	static_assert(sizeof(hkpStiffSpringConstraintAtom) == 0xC);
	static_assert(offsetof(hkpStiffSpringConstraintAtom, m_length) == 0x4);
	static_assert(offsetof(hkpStiffSpringConstraintAtom, m_maxLength) == 0x8);
}
