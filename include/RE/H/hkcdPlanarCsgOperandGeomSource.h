#pragma once

namespace RE
{
	class hkcdPlanarGeometry;

	class hkcdPlanarCsgOperandGeomSource
	{
	public:

		// members
		hkcdPlanarGeometry* m_geometry;  // 0x00
		std::int32_t m_materialOffset;   // 0x08
		std::int32_t m_numMaterialIds;   // 0x0C
		std::uint32_t m_flipPolygons;    // 0x10
	};
	static_assert(sizeof(hkcdPlanarCsgOperandGeomSource) == 0x18);
	static_assert(offsetof(hkcdPlanarCsgOperandGeomSource, m_geometry) == 0x0);
	static_assert(offsetof(hkcdPlanarCsgOperandGeomSource, m_materialOffset) == 0x8);
	static_assert(offsetof(hkcdPlanarCsgOperandGeomSource, m_numMaterialIds) == 0xC);
	static_assert(offsetof(hkcdPlanarCsgOperandGeomSource, m_flipPolygons) == 0x10);
}
