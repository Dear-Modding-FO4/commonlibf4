#pragma once

namespace RE
{
	class hkcdPlanarSolidNode
	{
	public:

		// members
		std::uint32_t m_parent;          // 0x00
		std::uint32_t m_left;            // 0x04
		std::uint32_t m_right;           // 0x08
		std::uint32_t m_nextFreeNodeId;  // 0x0C
		std::uint32_t m_planeId;         // 0x10
		std::uint32_t m_data;            // 0x14
		std::uint32_t m_typeAndFlags;    // 0x18
	};
	static_assert(sizeof(hkcdPlanarSolidNode) == 0x1C);
	static_assert(offsetof(hkcdPlanarSolidNode, m_parent) == 0x0);
	static_assert(offsetof(hkcdPlanarSolidNode, m_left) == 0x4);
	static_assert(offsetof(hkcdPlanarSolidNode, m_right) == 0x8);
	static_assert(offsetof(hkcdPlanarSolidNode, m_nextFreeNodeId) == 0xC);
	static_assert(offsetof(hkcdPlanarSolidNode, m_planeId) == 0x10);
	static_assert(offsetof(hkcdPlanarSolidNode, m_data) == 0x14);
	static_assert(offsetof(hkcdPlanarSolidNode, m_typeAndFlags) == 0x18);
}
