#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hknpMinMaxQuadTreeMinMaxLevel;

	class hknpMinMaxQuadTree
	{
	public:

		// members
		hkArray<hknpMinMaxQuadTreeMinMaxLevel> m_coarseTreeData;  // 0x00
		hkVector4f m_offset;                                      // 0x10
		float m_multiplier;                                       // 0x20
		float m_invMultiplier;                                    // 0x24
	};
	static_assert(sizeof(hknpMinMaxQuadTree) == 0x30);
	static_assert(offsetof(hknpMinMaxQuadTree, m_coarseTreeData) == 0x0);
	static_assert(offsetof(hknpMinMaxQuadTree, m_offset) == 0x10);
	static_assert(offsetof(hknpMinMaxQuadTree, m_multiplier) == 0x20);
	static_assert(offsetof(hknpMinMaxQuadTree, m_invMultiplier) == 0x24);
}
