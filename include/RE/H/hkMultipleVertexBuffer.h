#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkMeshVertexBuffer.h"
#include "RE/H/hkVertexFormat.h"

namespace RE
{
	class hkMemoryMeshVertexBuffer;
	class hkMultipleVertexBufferElementInfo;
	class hkMultipleVertexBufferLockedElement;
	class hkMultipleVertexBufferVertexBufferInfo;

	class __declspec(novtable) hkMultipleVertexBuffer :
		public hkMeshVertexBuffer  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMultipleVertexBuffer };
		inline static constexpr auto VTABLE{ VTABLE::hkMultipleVertexBuffer };

		// members
		hkVertexFormat m_vertexFormat;                                        // 0x10
		std::uint8_t pad114[0x4];                                             // 0x114
		hkArray<hkMultipleVertexBufferLockedElement> m_lockedElements;        // 0x118
		hkMemoryMeshVertexBuffer* m_lockedBuffer;                             // 0x128
		hkArray<hkMultipleVertexBufferElementInfo> m_elementInfos;            // 0x130
		hkArray<hkMultipleVertexBufferVertexBufferInfo> m_vertexBufferInfos;  // 0x140
		std::int32_t m_numVertices;                                           // 0x150
		bool m_isLocked;                                                      // 0x154
		std::uint8_t pad155[0x3];                                             // 0x155
		std::uint32_t m_updateCount;                                          // 0x158
		bool m_writeLock;                                                     // 0x15C
		bool m_isSharable;                                                    // 0x15D
		bool m_constructionComplete;                                          // 0x15E
	};
	static_assert(sizeof(hkMultipleVertexBuffer) == 0x160);
	static_assert(offsetof(hkMultipleVertexBuffer, m_vertexFormat) == 0x10);
	static_assert(offsetof(hkMultipleVertexBuffer, m_lockedElements) == 0x118);
	static_assert(offsetof(hkMultipleVertexBuffer, m_lockedBuffer) == 0x128);
	static_assert(offsetof(hkMultipleVertexBuffer, m_elementInfos) == 0x130);
	static_assert(offsetof(hkMultipleVertexBuffer, m_vertexBufferInfos) == 0x140);
	static_assert(offsetof(hkMultipleVertexBuffer, m_numVertices) == 0x150);
	static_assert(offsetof(hkMultipleVertexBuffer, m_isLocked) == 0x154);
	static_assert(offsetof(hkMultipleVertexBuffer, m_updateCount) == 0x158);
	static_assert(offsetof(hkMultipleVertexBuffer, m_writeLock) == 0x15C);
	static_assert(offsetof(hkMultipleVertexBuffer, m_isSharable) == 0x15D);
	static_assert(offsetof(hkMultipleVertexBuffer, m_constructionComplete) == 0x15E);
}
