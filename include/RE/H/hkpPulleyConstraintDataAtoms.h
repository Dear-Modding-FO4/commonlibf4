#pragma once

#include "RE/H/hkpPulleyConstraintAtom.h"
#include "RE/H/hkpSetLocalTranslationsConstraintAtom.h"

namespace RE
{
	class hkpPulleyConstraintDataAtoms
	{
	public:

		// members
		hkpSetLocalTranslationsConstraintAtom m_translations;  // 0x00
		hkpPulleyConstraintAtom m_pulley;                      // 0x30
	};
	static_assert(sizeof(hkpPulleyConstraintDataAtoms) == 0x70);
	static_assert(offsetof(hkpPulleyConstraintDataAtoms, m_translations) == 0x0);
	static_assert(offsetof(hkpPulleyConstraintDataAtoms, m_pulley) == 0x30);
}
