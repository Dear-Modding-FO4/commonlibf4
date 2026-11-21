#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpConstraintData;

	class hknpBridgeConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t pad02[0x2];              // 0x02
		std::int32_t m_numSolverResults;      // 0x04
		hkpConstraintData* m_constraintData;  // 0x08
		std::uint8_t m_padding[4];            // 0x10
	};
	static_assert(sizeof(hknpBridgeConstraintAtom) == 0x18);
	static_assert(offsetof(hknpBridgeConstraintAtom, m_numSolverResults) == 0x4);
	static_assert(offsetof(hknpBridgeConstraintAtom, m_constraintData) == 0x8);
	static_assert(offsetof(hknpBridgeConstraintAtom, m_padding) == 0x10);
}
