#pragma once

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpConstraintData;

	class hkpBridgeConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t pad02[0x6];              // 0x02
		void* m_buildJacobianFunc;            // 0x08
		hkpConstraintData* m_constraintData;  // 0x10
		std::uint8_t m_padding[4];            // 0x18
	};
	static_assert(sizeof(hkpBridgeConstraintAtom) == 0x20);
	static_assert(offsetof(hkpBridgeConstraintAtom, m_buildJacobianFunc) == 0x8);
	static_assert(offsetof(hkpBridgeConstraintAtom, m_constraintData) == 0x10);
	static_assert(offsetof(hkpBridgeConstraintAtom, m_padding) == 0x18);
}
