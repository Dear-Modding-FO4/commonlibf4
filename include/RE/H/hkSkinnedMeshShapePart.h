#pragma once

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkSkinnedMeshShapePart
	{
	public:

		// members
		std::int32_t m_startVertex;        // 0x00
		std::int32_t m_numVertices;        // 0x04
		std::int32_t m_startIndex;         // 0x08
		std::int32_t m_numIndices;         // 0x0C
		std::uint16_t m_boneSetId;         // 0x10
		std::uint16_t m_meshSectionIndex;  // 0x12
		std::uint8_t unk14[0xC];           // 0x14
		hkVector4f m_boundingSphere;       // 0x20
	};
	static_assert(sizeof(hkSkinnedMeshShapePart) == 0x30);
	static_assert(offsetof(hkSkinnedMeshShapePart, m_startVertex) == 0x0);
	static_assert(offsetof(hkSkinnedMeshShapePart, m_numVertices) == 0x4);
	static_assert(offsetof(hkSkinnedMeshShapePart, m_startIndex) == 0x8);
	static_assert(offsetof(hkSkinnedMeshShapePart, m_numIndices) == 0xC);
	static_assert(offsetof(hkSkinnedMeshShapePart, m_boneSetId) == 0x10);
	static_assert(offsetof(hkSkinnedMeshShapePart, m_meshSectionIndex) == 0x12);
	static_assert(offsetof(hkSkinnedMeshShapePart, m_boundingSphere) == 0x20);
}
