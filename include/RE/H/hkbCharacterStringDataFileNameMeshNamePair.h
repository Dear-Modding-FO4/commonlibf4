#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkbCharacterStringDataFileNameMeshNamePair
	{
	public:

		// members
		hkStringPtr m_fileName;  // 0x00
		hkStringPtr m_meshName;  // 0x08
	};
	static_assert(sizeof(hkbCharacterStringDataFileNameMeshNamePair) == 0x10);
	static_assert(offsetof(hkbCharacterStringDataFileNameMeshNamePair, m_fileName) == 0x0);
	static_assert(offsetof(hkbCharacterStringDataFileNameMeshNamePair, m_meshName) == 0x8);
}
