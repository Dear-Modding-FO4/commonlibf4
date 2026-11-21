#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkcdPlanarSolidNode;

	class __declspec(novtable) hkcdPlanarSolidNodeStorage :
		public hkReferencedObject  // 0x00
	{
	public:

		// members
		hkArray<hkcdPlanarSolidNode> m_storage;  // 0x10
		std::uint32_t m_firstFreeNodeId;         // 0x20
	};
	static_assert(sizeof(hkcdPlanarSolidNodeStorage) == 0x28);
	static_assert(offsetof(hkcdPlanarSolidNodeStorage, m_storage) == 0x10);
	static_assert(offsetof(hkcdPlanarSolidNodeStorage, m_firstFreeNodeId) == 0x20);
}
