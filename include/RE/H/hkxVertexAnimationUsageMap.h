#pragma once

namespace RE
{
	class hkxVertexAnimationUsageMap
	{
	public:

		// members
		std::uint16_t m_use;           // 0x00
		std::uint8_t m_useIndexOrig;   // 0x02
		std::uint8_t m_useIndexLocal;  // 0x03
	};
	static_assert(sizeof(hkxVertexAnimationUsageMap) == 0x4);
	static_assert(offsetof(hkxVertexAnimationUsageMap, m_use) == 0x0);
	static_assert(offsetof(hkxVertexAnimationUsageMap, m_useIndexOrig) == 0x2);
	static_assert(offsetof(hkxVertexAnimationUsageMap, m_useIndexLocal) == 0x3);
}
