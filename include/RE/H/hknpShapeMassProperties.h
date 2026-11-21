#pragma once

#include "RE/H/hkCompressedMassProperties.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpShapeMassProperties :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpShapeMassProperties };
		inline static constexpr auto VTABLE{ VTABLE::hknpShapeMassProperties };

		// members
		hkCompressedMassProperties m_compressedMassProperties;  // 0x10
	};
	static_assert(sizeof(hknpShapeMassProperties) == 0x30);
	static_assert(offsetof(hknpShapeMassProperties, m_compressedMassProperties) == 0x10);
}
