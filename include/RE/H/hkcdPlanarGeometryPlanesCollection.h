#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkcdPlanarGeometryPrimitivesPlane;

	class __declspec(novtable) hkcdPlanarGeometryPlanesCollection :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkcdPlanarGeometryPlanesCollection };
		inline static constexpr auto VTABLE{ VTABLE::hkcdPlanarGeometryPlanesCollection };

		enum class Bounds : std::uint32_t
		{
			kBoundPosX = 0,
			kBoundNegX = 1,
			kBoundPosY = 2,
			kBoundNegY = 3,
			kBoundPosZ = 4,
			kBoundNegZ = 5,
			kNumBounds = 6
		};

		// members
		hkVector4f m_offsetAndScale;                          // 0x10
		hkArray<hkcdPlanarGeometryPrimitivesPlane> m_planes;  // 0x20
		void* m_cache;                                        // 0x30
		void* m_criticalAccess;                               // 0x38
	};
	static_assert(sizeof(hkcdPlanarGeometryPlanesCollection) == 0x40);
	static_assert(offsetof(hkcdPlanarGeometryPlanesCollection, m_offsetAndScale) == 0x10);
	static_assert(offsetof(hkcdPlanarGeometryPlanesCollection, m_planes) == 0x20);
	static_assert(offsetof(hkcdPlanarGeometryPlanesCollection, m_cache) == 0x30);
	static_assert(offsetof(hkcdPlanarGeometryPlanesCollection, m_criticalAccess) == 0x38);
}
