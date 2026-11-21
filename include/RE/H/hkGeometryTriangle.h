#pragma once

namespace RE
{
	class hkGeometryTriangle
	{
	public:

		// members
		std::int32_t m_a;         // 0x00
		std::int32_t m_b;         // 0x04
		std::int32_t m_c;         // 0x08
		std::int32_t m_material;  // 0x0C
	};
	static_assert(sizeof(hkGeometryTriangle) == 0x10);
	static_assert(offsetof(hkGeometryTriangle, m_a) == 0x0);
	static_assert(offsetof(hkGeometryTriangle, m_b) == 0x4);
	static_assert(offsetof(hkGeometryTriangle, m_c) == 0x8);
	static_assert(offsetof(hkGeometryTriangle, m_material) == 0xC);
}
