#pragma once

#include "RE/H/hkFreeListArray_hknpMaterial.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpMaterialLibrary :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpMaterialLibrary };
		inline static constexpr auto VTABLE{ VTABLE::hknpMaterialLibrary };

		// members
		void* m_materialAddedSignal;             // 0x10
		void* m_materialModifiedSignal;          // 0x18
		void* m_materialRemovedSignal;           // 0x20
		hkFreeListArray_hknpMaterial m_entries;  // 0x28
	};
	static_assert(sizeof(hknpMaterialLibrary) == 0x40);
	static_assert(offsetof(hknpMaterialLibrary, m_materialAddedSignal) == 0x10);
	static_assert(offsetof(hknpMaterialLibrary, m_materialModifiedSignal) == 0x18);
	static_assert(offsetof(hknpMaterialLibrary, m_materialRemovedSignal) == 0x20);
	static_assert(offsetof(hknpMaterialLibrary, m_entries) == 0x28);
}
