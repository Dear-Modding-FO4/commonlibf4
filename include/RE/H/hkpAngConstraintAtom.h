#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpAngConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t m_firstConstrainedAxis;  // 0x02
		std::uint8_t m_numConstrainedAxes;    // 0x03
		std::uint8_t m_padding[12];           // 0x04
	};
	static_assert(sizeof(hkpAngConstraintAtom) == 0x10);
	static_assert(offsetof(hkpAngConstraintAtom, m_firstConstrainedAxis) == 0x2);
	static_assert(offsetof(hkpAngConstraintAtom, m_numConstrainedAxes) == 0x3);
	static_assert(offsetof(hkpAngConstraintAtom, m_padding) == 0x4);
}
