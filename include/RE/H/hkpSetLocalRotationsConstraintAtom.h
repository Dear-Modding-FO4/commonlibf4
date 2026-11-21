#pragma once

#include "RE/H/hkRotation.h"
#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpSetLocalRotationsConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t unk02[0xE];  // 0x02
		hkRotationf m_rotationA;  // 0x10
		hkRotationf m_rotationB;  // 0x40
	};
	static_assert(sizeof(hkpSetLocalRotationsConstraintAtom) == 0x70);
	static_assert(offsetof(hkpSetLocalRotationsConstraintAtom, m_rotationA) == 0x10);
	static_assert(offsetof(hkpSetLocalRotationsConstraintAtom, m_rotationB) == 0x40);
}
