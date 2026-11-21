#pragma once

#include "RE/H/hkArray.h"

namespace RE
{
	class hkMeshBoneIndexMapping
	{
	public:

		// members
		hkArray<std::int16_t> m_mapping;  // 0x00
	};
	static_assert(sizeof(hkMeshBoneIndexMapping) == 0x10);
	static_assert(offsetof(hkMeshBoneIndexMapping, m_mapping) == 0x0);
}
