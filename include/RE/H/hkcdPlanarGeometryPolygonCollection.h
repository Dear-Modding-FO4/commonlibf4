#pragma once

#include "RE/H/hkcdPlanarGeometryPrimitivesCollection28.h"

namespace RE
{
	class __declspec(novtable) hkcdPlanarGeometryPolygonCollection :
		public hkcdPlanarGeometryPrimitivesCollection28  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkcdPlanarGeometryPolygonCollection };
		inline static constexpr auto VTABLE{ VTABLE::hkcdPlanarGeometryPolygonCollection };
	};
	static_assert(sizeof(hkcdPlanarGeometryPolygonCollection) == 0xD90);
}
