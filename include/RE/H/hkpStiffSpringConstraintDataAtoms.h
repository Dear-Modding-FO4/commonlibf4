#pragma once

#include "RE/H/hkpSetLocalTranslationsConstraintAtom.h"
#include "RE/H/hkpSetupStabilizationAtom.h"
#include "RE/H/hkpStiffSpringConstraintAtom.h"

namespace RE
{
	class hkpStiffSpringConstraintDataAtoms
	{
	public:

		// members
		hkpSetLocalTranslationsConstraintAtom m_pivots;  // 0x00
		hkpSetupStabilizationAtom m_setupStabilization;  // 0x30
		hkpStiffSpringConstraintAtom m_spring;           // 0x40
	};
	static_assert(sizeof(hkpStiffSpringConstraintDataAtoms) == 0x50);
	static_assert(offsetof(hkpStiffSpringConstraintDataAtoms, m_pivots) == 0x0);
	static_assert(offsetof(hkpStiffSpringConstraintDataAtoms, m_setupStabilization) == 0x30);
	static_assert(offsetof(hkpStiffSpringConstraintDataAtoms, m_spring) == 0x40);
}
