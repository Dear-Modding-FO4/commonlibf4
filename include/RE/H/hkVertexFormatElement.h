#pragma once

namespace RE
{
	class hkVertexFormatElement
	{
	public:

		// members
		std::uint8_t m_dataType;   // 0x00
		std::uint8_t m_numValues;  // 0x01
		std::uint8_t m_usage;      // 0x02
		std::uint8_t m_subUsage;   // 0x03
		std::uint8_t m_flags;      // 0x04
		std::uint8_t m_pad[3];     // 0x05
	};
	static_assert(sizeof(hkVertexFormatElement) == 0x8);
	static_assert(offsetof(hkVertexFormatElement, m_dataType) == 0x0);
	static_assert(offsetof(hkVertexFormatElement, m_numValues) == 0x1);
	static_assert(offsetof(hkVertexFormatElement, m_usage) == 0x2);
	static_assert(offsetof(hkVertexFormatElement, m_subUsage) == 0x3);
	static_assert(offsetof(hkVertexFormatElement, m_flags) == 0x4);
	static_assert(offsetof(hkVertexFormatElement, m_pad) == 0x5);
}
