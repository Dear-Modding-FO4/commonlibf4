#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkBaseObject.h"

namespace RE
{
	class hkcdSimdTreeNode;

	class __declspec(novtable) hkcdSimdTree :
		public hkBaseObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkcdSimdTree };
		inline static constexpr auto VTABLE{ VTABLE::hkcdSimdTree };

		// add
		virtual void checkIntegrity();  // 0x10 [02] (void)

		// members
		hkArray<hkcdSimdTreeNode> m_nodes;  // 0x08
	};
	static_assert(sizeof(hkcdSimdTree) == 0x18);
	static_assert(offsetof(hkcdSimdTree, m_nodes) == 0x8);
}
