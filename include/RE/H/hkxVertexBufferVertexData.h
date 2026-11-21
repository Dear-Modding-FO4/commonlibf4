#pragma once

#include "RE/H/hkArray.h"

namespace RE
{
	class hkxVertexBufferVertexData
	{
	public:

		// members
		hkArray<std::uint32_t> m_vectorData;  // 0x00
		hkArray<std::uint32_t> m_floatData;   // 0x10
		hkArray<std::uint32_t> m_uint32Data;  // 0x20
		hkArray<std::uint16_t> m_uint16Data;  // 0x30
		hkArray<std::uint8_t> m_uint8Data;    // 0x40
		std::uint32_t m_numVerts;             // 0x50
		std::uint32_t m_vectorStride;         // 0x54
		std::uint32_t m_floatStride;          // 0x58
		std::uint32_t m_uint32Stride;         // 0x5C
		std::uint32_t m_uint16Stride;         // 0x60
		std::uint32_t m_uint8Stride;          // 0x64
	};
	static_assert(sizeof(hkxVertexBufferVertexData) == 0x68);
	static_assert(offsetof(hkxVertexBufferVertexData, m_vectorData) == 0x0);
	static_assert(offsetof(hkxVertexBufferVertexData, m_floatData) == 0x10);
	static_assert(offsetof(hkxVertexBufferVertexData, m_uint32Data) == 0x20);
	static_assert(offsetof(hkxVertexBufferVertexData, m_uint16Data) == 0x30);
	static_assert(offsetof(hkxVertexBufferVertexData, m_uint8Data) == 0x40);
	static_assert(offsetof(hkxVertexBufferVertexData, m_numVerts) == 0x50);
	static_assert(offsetof(hkxVertexBufferVertexData, m_vectorStride) == 0x54);
	static_assert(offsetof(hkxVertexBufferVertexData, m_floatStride) == 0x58);
	static_assert(offsetof(hkxVertexBufferVertexData, m_uint32Stride) == 0x5C);
	static_assert(offsetof(hkxVertexBufferVertexData, m_uint16Stride) == 0x60);
	static_assert(offsetof(hkxVertexBufferVertexData, m_uint8Stride) == 0x64);
}
