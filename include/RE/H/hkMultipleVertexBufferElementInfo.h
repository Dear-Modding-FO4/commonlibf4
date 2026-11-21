#pragma once

namespace RE
{
	class hkMultipleVertexBufferElementInfo
	{
	public:

		// members
		std::uint8_t m_vertexBufferIndex;  // 0x00
		std::uint8_t m_elementIndex;       // 0x01
	};
	static_assert(sizeof(hkMultipleVertexBufferElementInfo) == 0x2);
	static_assert(offsetof(hkMultipleVertexBufferElementInfo, m_vertexBufferIndex) == 0x0);
	static_assert(offsetof(hkMultipleVertexBufferElementInfo, m_elementIndex) == 0x1);
}
