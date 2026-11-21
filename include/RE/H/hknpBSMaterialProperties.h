#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hknpBSMaterial;

	class __declspec(novtable) hknpBSMaterialProperties :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBSMaterialProperties };
		inline static constexpr auto VTABLE{ VTABLE::hknpBSMaterialProperties };

		// members
		hkArray<hknpBSMaterial> m_MaterialA;  // 0x10
	};
	static_assert(sizeof(hknpBSMaterialProperties) == 0x20);
	static_assert(offsetof(hknpBSMaterialProperties, m_MaterialA) == 0x10);
}
