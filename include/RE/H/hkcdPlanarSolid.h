#pragma once

#include "RE/H/hkcdPlanarEntity.h"

namespace RE
{
	class hkcdPlanarGeometryPlanesCollection;
	class hkcdPlanarSolidNodeStorage;

	class __declspec(novtable) hkcdPlanarSolid :
		public hkcdPlanarEntity  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkcdPlanarSolid };
		inline static constexpr auto VTABLE{ VTABLE::hkcdPlanarSolid };

		enum class NodeTypes : std::uint32_t
		{
			kNodeTypeInternal = 0,
			kNodeTypeIn = 1,
			kNodeTypeOut = 2,
			kNodeTypeUnknown = 3,
			kNodeTypeInvalid = 4,
			kNodeTypeFree = 15
		};

		// members
		hkcdPlanarSolidNodeStorage* m_nodes;           // 0x18
		hkcdPlanarGeometryPlanesCollection* m_planes;  // 0x20
		std::uint32_t m_rootNodeId;                    // 0x28
	};
	static_assert(sizeof(hkcdPlanarSolid) == 0x30);
	static_assert(offsetof(hkcdPlanarSolid, m_nodes) == 0x18);
	static_assert(offsetof(hkcdPlanarSolid, m_planes) == 0x20);
	static_assert(offsetof(hkcdPlanarSolid, m_rootNodeId) == 0x28);
}
