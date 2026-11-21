#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkcdPlanarCsgOperandGeomSource;
	class hkcdPlanarGeometry;
	class hkcdPlanarSolid;

	class __declspec(novtable) hkcdPlanarCsgOperand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkcdPlanarCsgOperand };
		inline static constexpr auto VTABLE{ VTABLE::hkcdPlanarCsgOperand };

		// members
		hkcdPlanarGeometry* m_geometry;                         // 0x10
		hkcdPlanarGeometry* m_danglingGeometry;                 // 0x18
		hkcdPlanarSolid* m_solid;                               // 0x20
		hkArray<hkcdPlanarCsgOperandGeomSource> m_geomSources;  // 0x28
		void* m_regions;                                        // 0x38
	};
	static_assert(sizeof(hkcdPlanarCsgOperand) == 0x40);
	static_assert(offsetof(hkcdPlanarCsgOperand, m_geometry) == 0x10);
	static_assert(offsetof(hkcdPlanarCsgOperand, m_danglingGeometry) == 0x18);
	static_assert(offsetof(hkcdPlanarCsgOperand, m_solid) == 0x20);
	static_assert(offsetof(hkcdPlanarCsgOperand, m_geomSources) == 0x28);
	static_assert(offsetof(hkcdPlanarCsgOperand, m_regions) == 0x38);
}
