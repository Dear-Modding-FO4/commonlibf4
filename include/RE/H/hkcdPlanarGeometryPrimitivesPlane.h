#pragma once

namespace RE
{
	class hkcdPlanarGeometryPrimitivesPlane
	{
	public:

		// members
		std::int64_t m_iEqn[4];  // 0x00
		std::int64_t m_dEqn[4];  // 0x20
	};
	static_assert(sizeof(hkcdPlanarGeometryPrimitivesPlane) == 0x40);
	static_assert(offsetof(hkcdPlanarGeometryPrimitivesPlane, m_iEqn) == 0x0);
	static_assert(offsetof(hkcdPlanarGeometryPrimitivesPlane, m_dEqn) == 0x20);
}
