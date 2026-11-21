#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkTransform.h"

namespace RE
{
	class __declspec(novtable) hknpDestructionShapeProperties :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpDestructionShapeProperties };
		inline static constexpr auto VTABLE{ VTABLE::hknpDestructionShapeProperties };

		// members
		hkTransformf m_worldFromShape;  // 0x10
		bool m_isHierarchicalCompound;  // 0x50
		bool m_hasDestructionShapes;    // 0x51
	};
	static_assert(sizeof(hknpDestructionShapeProperties) == 0x60);
	static_assert(offsetof(hknpDestructionShapeProperties, m_worldFromShape) == 0x10);
	static_assert(offsetof(hknpDestructionShapeProperties, m_isHierarchicalCompound) == 0x50);
	static_assert(offsetof(hknpDestructionShapeProperties, m_hasDestructionShapes) == 0x51);
}
