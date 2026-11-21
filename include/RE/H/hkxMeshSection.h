#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkMeshBoneIndexMapping;
	class hkReferencedObject;
	class hkxIndexBuffer;
	class hkxMaterial;
	class hkxVertexAnimation;
	class hkxVertexBuffer;

	class __declspec(novtable) hkxMeshSection :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxMeshSection };
		inline static constexpr auto VTABLE{ VTABLE::hkxMeshSection };

		// members
		hkxVertexBuffer* m_vertexBuffer;                  // 0x10
		hkArray<hkxIndexBuffer*> m_indexBuffers;          // 0x18
		hkxMaterial* m_material;                          // 0x28
		hkArray<hkReferencedObject*> m_userChannels;      // 0x30
		hkArray<hkxVertexAnimation*> m_vertexAnimations;  // 0x40
		hkArray<float> m_linearKeyFrameHints;             // 0x50
		hkArray<hkMeshBoneIndexMapping> m_boneMatrixMap;  // 0x60
	};
	static_assert(sizeof(hkxMeshSection) == 0x70);
	static_assert(offsetof(hkxMeshSection, m_vertexBuffer) == 0x10);
	static_assert(offsetof(hkxMeshSection, m_indexBuffers) == 0x18);
	static_assert(offsetof(hkxMeshSection, m_material) == 0x28);
	static_assert(offsetof(hkxMeshSection, m_userChannels) == 0x30);
	static_assert(offsetof(hkxMeshSection, m_vertexAnimations) == 0x40);
	static_assert(offsetof(hkxMeshSection, m_linearKeyFrameHints) == 0x50);
	static_assert(offsetof(hkxMeshSection, m_boneMatrixMap) == 0x60);
}
