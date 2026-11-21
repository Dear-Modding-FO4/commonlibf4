#pragma once

namespace RE
{
	class hkMultipleVertexBufferLockedElement
	{
	public:

		// members
		std::uint8_t m_vertexBufferIndex;  // 0x00
		std::uint8_t m_elementIndex;       // 0x01
		std::uint8_t m_lockedBufferIndex;  // 0x02
		std::uint8_t m_vertexFormatIndex;  // 0x03
		std::uint8_t m_lockFlags;          // 0x04
		std::uint8_t m_outputBufferIndex;  // 0x05
		std::int8_t m_emulatedIndex;       // 0x06
	};
	static_assert(sizeof(hkMultipleVertexBufferLockedElement) == 0x7);
	static_assert(offsetof(hkMultipleVertexBufferLockedElement, m_vertexBufferIndex) == 0x0);
	static_assert(offsetof(hkMultipleVertexBufferLockedElement, m_elementIndex) == 0x1);
	static_assert(offsetof(hkMultipleVertexBufferLockedElement, m_lockedBufferIndex) == 0x2);
	static_assert(offsetof(hkMultipleVertexBufferLockedElement, m_vertexFormatIndex) == 0x3);
	static_assert(offsetof(hkMultipleVertexBufferLockedElement, m_lockFlags) == 0x4);
	static_assert(offsetof(hkMultipleVertexBufferLockedElement, m_outputBufferIndex) == 0x5);
	static_assert(offsetof(hkMultipleVertexBufferLockedElement, m_emulatedIndex) == 0x6);
}
