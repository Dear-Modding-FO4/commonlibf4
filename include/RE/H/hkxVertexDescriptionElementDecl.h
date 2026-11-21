#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkxVertexDescriptionElementDecl
	{
	public:

		// members
		std::uint32_t m_byteOffset;  // 0x00
		std::uint16_t m_type;        // 0x04
		std::uint16_t m_usage;       // 0x06
		std::uint32_t m_byteStride;  // 0x08
		std::uint8_t m_numElements;  // 0x0C
		std::uint8_t unk0D[0x3];     // 0x0D
		hkStringPtr m_channelID;     // 0x10
	};
	static_assert(sizeof(hkxVertexDescriptionElementDecl) == 0x18);
	static_assert(offsetof(hkxVertexDescriptionElementDecl, m_byteOffset) == 0x0);
	static_assert(offsetof(hkxVertexDescriptionElementDecl, m_type) == 0x4);
	static_assert(offsetof(hkxVertexDescriptionElementDecl, m_usage) == 0x6);
	static_assert(offsetof(hkxVertexDescriptionElementDecl, m_byteStride) == 0x8);
	static_assert(offsetof(hkxVertexDescriptionElementDecl, m_numElements) == 0xC);
	static_assert(offsetof(hkxVertexDescriptionElementDecl, m_channelID) == 0x10);
}
