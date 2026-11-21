#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkcdStaticTreeDefaultTreeStorage6;

	class __declspec(novtable) hkcdStaticAabbTree :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkcdStaticAabbTree };
		inline static constexpr auto VTABLE{ VTABLE::hkcdStaticAabbTree };

		// members
		bool m_shouldDeleteTree;                       // 0x10
		std::uint8_t pad11[0x7];                       // 0x11
		hkcdStaticTreeDefaultTreeStorage6* m_treePtr;  // 0x18
	};
	static_assert(sizeof(hkcdStaticAabbTree) == 0x20);
	static_assert(offsetof(hkcdStaticAabbTree, m_shouldDeleteTree) == 0x10);
	static_assert(offsetof(hkcdStaticAabbTree, m_treePtr) == 0x18);
}
