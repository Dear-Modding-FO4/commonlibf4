#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkResourceContainer.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkMemoryResourceHandle;

	class __declspec(novtable) hkMemoryResourceContainer :
		public hkResourceContainer  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMemoryResourceContainer };
		inline static constexpr auto VTABLE{ VTABLE::hkMemoryResourceContainer };

		// members
		hkStringPtr m_name;                                  // 0x10
		hkMemoryResourceContainer* m_parent;                 // 0x18
		hkArray<hkMemoryResourceHandle*> m_resourceHandles;  // 0x20
		hkArray<hkMemoryResourceContainer*> m_children;      // 0x30
	};
	static_assert(sizeof(hkMemoryResourceContainer) == 0x40);
	static_assert(offsetof(hkMemoryResourceContainer, m_name) == 0x10);
	static_assert(offsetof(hkMemoryResourceContainer, m_parent) == 0x18);
	static_assert(offsetof(hkMemoryResourceContainer, m_resourceHandles) == 0x20);
	static_assert(offsetof(hkMemoryResourceContainer, m_children) == 0x30);
}
