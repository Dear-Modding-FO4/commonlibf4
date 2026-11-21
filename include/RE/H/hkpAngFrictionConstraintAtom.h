#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpAngFrictionConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t m_isEnabled;          // 0x02
		std::uint8_t m_firstFrictionAxis;  // 0x03
		std::uint8_t m_numFrictionAxes;    // 0x04
		std::uint8_t unk05[0x3];           // 0x05
		float m_maxFrictionTorque;         // 0x08
		std::uint8_t m_padding[4];         // 0x0C
	};
	static_assert(sizeof(hkpAngFrictionConstraintAtom) == 0x10);
	static_assert(offsetof(hkpAngFrictionConstraintAtom, m_isEnabled) == 0x2);
	static_assert(offsetof(hkpAngFrictionConstraintAtom, m_firstFrictionAxis) == 0x3);
	static_assert(offsetof(hkpAngFrictionConstraintAtom, m_numFrictionAxes) == 0x4);
	static_assert(offsetof(hkpAngFrictionConstraintAtom, m_maxFrictionTorque) == 0x8);
	static_assert(offsetof(hkpAngFrictionConstraintAtom, m_padding) == 0xC);
}
