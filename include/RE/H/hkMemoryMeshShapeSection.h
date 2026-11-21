#pragma once

#include "RE/H/hkMeshBoneIndexMapping.h"

namespace RE
{
	class hkMeshMaterial;
	class hkMeshVertexBuffer;

	class hkMemoryMeshShapeSection
	{
	public:

		// members
		hkMeshVertexBuffer* m_vertexBuffer;      // 0x00
		hkMeshMaterial* m_material;              // 0x08
		hkMeshBoneIndexMapping m_boneMatrixMap;  // 0x10
		std::uint8_t m_primitiveType;            // 0x20
		std::uint8_t unk21[0x3];                 // 0x21
		std::int32_t m_numPrimitives;            // 0x24
		std::uint8_t m_indexType;                // 0x28
		std::uint8_t unk29[0x3];                 // 0x29
		std::int32_t m_vertexStartIndex;         // 0x2C
		std::int32_t m_transformIndex;           // 0x30
		std::int32_t m_indexBufferOffset;        // 0x34
	};
	static_assert(sizeof(hkMemoryMeshShapeSection) == 0x38);
	static_assert(offsetof(hkMemoryMeshShapeSection, m_vertexBuffer) == 0x0);
	static_assert(offsetof(hkMemoryMeshShapeSection, m_material) == 0x8);
	static_assert(offsetof(hkMemoryMeshShapeSection, m_boneMatrixMap) == 0x10);
	static_assert(offsetof(hkMemoryMeshShapeSection, m_primitiveType) == 0x20);
	static_assert(offsetof(hkMemoryMeshShapeSection, m_numPrimitives) == 0x24);
	static_assert(offsetof(hkMemoryMeshShapeSection, m_indexType) == 0x28);
	static_assert(offsetof(hkMemoryMeshShapeSection, m_vertexStartIndex) == 0x2C);
	static_assert(offsetof(hkMemoryMeshShapeSection, m_transformIndex) == 0x30);
	static_assert(offsetof(hkMemoryMeshShapeSection, m_indexBufferOffset) == 0x34);
}
