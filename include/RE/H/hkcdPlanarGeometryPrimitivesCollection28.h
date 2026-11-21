#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkcdPlanarGeometryPrimitivesCollection28 :
		public hkReferencedObject  // 0x00
	{
	public:

		// members
		hkArray<std::int32_t> m_storage;       // 0x10
		std::uint32_t m_primaryBitmap;         // 0x20
		std::uint32_t m_secondaryBitmaps[26];  // 0x24
		std::uint32_t m_freeBlocks[832];       // 0x8C
	};
	static_assert(sizeof(hkcdPlanarGeometryPrimitivesCollection28) == 0xD90);
	static_assert(offsetof(hkcdPlanarGeometryPrimitivesCollection28, m_storage) == 0x10);
	static_assert(offsetof(hkcdPlanarGeometryPrimitivesCollection28, m_primaryBitmap) == 0x20);
	static_assert(offsetof(hkcdPlanarGeometryPrimitivesCollection28, m_secondaryBitmaps) == 0x24);
	static_assert(offsetof(hkcdPlanarGeometryPrimitivesCollection28, m_freeBlocks) == 0x8C);
}
