#pragma once

#include "RE/H/hkFreeListArray_hknpMotionProperties.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpMotionPropertiesLibrary :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpMotionPropertiesLibrary };
		inline static constexpr auto VTABLE{ VTABLE::hknpMotionPropertiesLibrary };

		// members
		void* m_entryAddedSignal;                        // 0x10
		void* m_entryModifiedSignal;                     // 0x18
		void* m_entryRemovedSignal;                      // 0x20
		hkFreeListArray_hknpMotionProperties m_entries;  // 0x28
	};
	static_assert(sizeof(hknpMotionPropertiesLibrary) == 0x40);
	static_assert(offsetof(hknpMotionPropertiesLibrary, m_entryAddedSignal) == 0x10);
	static_assert(offsetof(hknpMotionPropertiesLibrary, m_entryModifiedSignal) == 0x18);
	static_assert(offsetof(hknpMotionPropertiesLibrary, m_entryRemovedSignal) == 0x20);
	static_assert(offsetof(hknpMotionPropertiesLibrary, m_entries) == 0x28);
}
