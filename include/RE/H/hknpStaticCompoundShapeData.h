#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hknpStaticCompoundShapeTree.h"

namespace RE
{
	class __declspec(novtable) hknpStaticCompoundShapeData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpStaticCompoundShapeData };
		inline static constexpr auto VTABLE{ VTABLE::hknpStaticCompoundShapeData };

		// members
		hknpStaticCompoundShapeTree m_aabbTree;  // 0x10
	};
	static_assert(sizeof(hknpStaticCompoundShapeData) == 0x40);
	static_assert(offsetof(hknpStaticCompoundShapeData, m_aabbTree) == 0x10);
}
