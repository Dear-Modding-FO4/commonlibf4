#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hknpMaterialDescriptor;

	class __declspec(novtable) hknpMaterialPalette :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpMaterialPalette };
		inline static constexpr auto VTABLE{ VTABLE::hknpMaterialPalette };

		// members
		hkArray<hknpMaterialDescriptor> m_entries;  // 0x10
	};
	static_assert(sizeof(hknpMaterialPalette) == 0x20);
	static_assert(offsetof(hknpMaterialPalette, m_entries) == 0x10);
}
