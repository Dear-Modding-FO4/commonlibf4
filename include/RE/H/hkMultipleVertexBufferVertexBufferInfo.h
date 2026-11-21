#pragma once

namespace RE
{
	class hkMeshVertexBuffer;

	class hkMultipleVertexBufferVertexBufferInfo
	{
	public:

		// members
		hkMeshVertexBuffer* m_vertexBuffer;  // 0x00
		void* m_lockedVertices;              // 0x08
		bool m_isLocked;                     // 0x10
	};
	static_assert(sizeof(hkMultipleVertexBufferVertexBufferInfo) == 0x18);
	static_assert(offsetof(hkMultipleVertexBufferVertexBufferInfo, m_vertexBuffer) == 0x0);
	static_assert(offsetof(hkMultipleVertexBufferVertexBufferInfo, m_lockedVertices) == 0x8);
	static_assert(offsetof(hkMultipleVertexBufferVertexBufferInfo, m_isLocked) == 0x10);
}
