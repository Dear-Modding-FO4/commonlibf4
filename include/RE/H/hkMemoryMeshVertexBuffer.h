#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkMeshVertexBuffer.h"
#include "RE/H/hkVertexFormat.h"

namespace RE
{
	class __declspec(novtable) hkMemoryMeshVertexBuffer :
		public hkMeshVertexBuffer  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMemoryMeshVertexBuffer };
		inline static constexpr auto VTABLE{ VTABLE::hkMemoryMeshVertexBuffer };

		// members
		hkVertexFormat m_format;            // 0x10
		std::int32_t m_elementOffsets[32];  // 0x114
		std::uint8_t pad194[0x4];           // 0x194
		hkArray<std::uint8_t> m_memory;     // 0x198
		std::int32_t m_vertexStride;        // 0x1A8
		bool m_locked;                      // 0x1AC
		std::uint8_t pad1AD[0x3];           // 0x1AD
		std::int32_t m_numVertices;         // 0x1B0
		bool m_isBigEndian;                 // 0x1B4
		bool m_isSharable;                  // 0x1B5
	};
	static_assert(sizeof(hkMemoryMeshVertexBuffer) == 0x1B8);
	static_assert(offsetof(hkMemoryMeshVertexBuffer, m_format) == 0x10);
	static_assert(offsetof(hkMemoryMeshVertexBuffer, m_elementOffsets) == 0x114);
	static_assert(offsetof(hkMemoryMeshVertexBuffer, m_memory) == 0x198);
	static_assert(offsetof(hkMemoryMeshVertexBuffer, m_vertexStride) == 0x1A8);
	static_assert(offsetof(hkMemoryMeshVertexBuffer, m_locked) == 0x1AC);
	static_assert(offsetof(hkMemoryMeshVertexBuffer, m_numVertices) == 0x1B0);
	static_assert(offsetof(hkMemoryMeshVertexBuffer, m_isBigEndian) == 0x1B4);
	static_assert(offsetof(hkMemoryMeshVertexBuffer, m_isSharable) == 0x1B5);
}
