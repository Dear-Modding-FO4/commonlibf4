#pragma once

#include "RE/H/hkcdPlanarEntity.h"

namespace RE
{
	class hkcdPlanarGeometryPlanesCollection;
	class hkcdPlanarGeometryPolygonCollection;

	class __declspec(novtable) hkcdPlanarGeometry :
		public hkcdPlanarEntity  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkcdPlanarGeometry };
		inline static constexpr auto VTABLE{ VTABLE::hkcdPlanarGeometry };

		// members
		hkcdPlanarGeometryPlanesCollection* m_planes;  // 0x18
		hkcdPlanarGeometryPolygonCollection* m_polys;  // 0x20
		void* m_vertices;                              // 0x28
	};
	static_assert(sizeof(hkcdPlanarGeometry) == 0x30);
	static_assert(offsetof(hkcdPlanarGeometry, m_planes) == 0x18);
	static_assert(offsetof(hkcdPlanarGeometry, m_polys) == 0x20);
	static_assert(offsetof(hkcdPlanarGeometry, m_vertices) == 0x28);
}
