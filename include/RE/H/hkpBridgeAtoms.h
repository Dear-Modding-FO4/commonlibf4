#pragma once

#include "RE/H/hkpBridgeConstraintAtom.h"

namespace RE
{
	class hkpBridgeAtoms
	{
	public:

		// members
		hkpBridgeConstraintAtom m_bridgeAtom;  // 0x00
	};
	static_assert(sizeof(hkpBridgeAtoms) == 0x20);
	static_assert(offsetof(hkpBridgeAtoms, m_bridgeAtom) == 0x0);
}
