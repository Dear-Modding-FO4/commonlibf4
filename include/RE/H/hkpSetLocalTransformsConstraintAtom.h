#pragma once

#include "RE/H/hkTransform.h"
#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpSetLocalTransformsConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t unk02[0xE];    // 0x02
		hkTransformf m_transformA;  // 0x10
		hkTransformf m_transformB;  // 0x50
	};
	static_assert(sizeof(hkpSetLocalTransformsConstraintAtom) == 0x90);
	static_assert(offsetof(hkpSetLocalTransformsConstraintAtom, m_transformA) == 0x10);
	static_assert(offsetof(hkpSetLocalTransformsConstraintAtom, m_transformB) == 0x50);
}
