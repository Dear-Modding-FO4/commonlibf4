#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpSetLocalTranslationsConstraintAtom :
		public hkpConstraintAtom  // 0x00
	{
	public:

		// members
		std::uint8_t unk02[0xE];    // 0x02
		hkVector4f m_translationA;  // 0x10
		hkVector4f m_translationB;  // 0x20
	};
	static_assert(sizeof(hkpSetLocalTranslationsConstraintAtom) == 0x30);
	static_assert(offsetof(hkpSetLocalTranslationsConstraintAtom, m_translationA) == 0x10);
	static_assert(offsetof(hkpSetLocalTranslationsConstraintAtom, m_translationB) == 0x20);
}
