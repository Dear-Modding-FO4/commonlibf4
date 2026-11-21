#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkResourceHandle.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkMemoryResourceHandleExternalLink;
	class hkReferencedObject;

	class __declspec(novtable) hkMemoryResourceHandle :
		public hkResourceHandle  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMemoryResourceHandle };
		inline static constexpr auto VTABLE{ VTABLE::hkMemoryResourceHandle };

		// members
		hkReferencedObject* m_variant;                             // 0x10
		hkStringPtr m_name;                                        // 0x18
		hkArray<hkMemoryResourceHandleExternalLink> m_references;  // 0x20
	};
	static_assert(sizeof(hkMemoryResourceHandle) == 0x30);
	static_assert(offsetof(hkMemoryResourceHandle, m_variant) == 0x10);
	static_assert(offsetof(hkMemoryResourceHandle, m_name) == 0x18);
	static_assert(offsetof(hkMemoryResourceHandle, m_references) == 0x20);
}
