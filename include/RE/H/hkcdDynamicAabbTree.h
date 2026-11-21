#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkcdDynamicTreeDefaultTree48Storage;

	class __declspec(novtable) hkcdDynamicAabbTree :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkcdDynamicAabbTree };
		inline static constexpr auto VTABLE{ VTABLE::hkcdDynamicAabbTree };

		// members
		bool m_shouldDeleteTree;                         // 0x10
		std::uint8_t pad11[0x7];                         // 0x11
		hkcdDynamicTreeDefaultTree48Storage* m_treePtr;  // 0x18
	};
	static_assert(sizeof(hkcdDynamicAabbTree) == 0x20);
	static_assert(offsetof(hkcdDynamicAabbTree, m_shouldDeleteTree) == 0x10);
	static_assert(offsetof(hkcdDynamicAabbTree, m_treePtr) == 0x18);
}
