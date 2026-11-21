#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkxAttributeGroup;

	class __declspec(novtable) hkxAttributeHolder :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxAttributeHolder };
		inline static constexpr auto VTABLE{ VTABLE::hkxAttributeHolder };

		// members
		hkArray<hkxAttributeGroup> m_attributeGroups;  // 0x10
	};
	static_assert(sizeof(hkxAttributeHolder) == 0x20);
	static_assert(offsetof(hkxAttributeHolder, m_attributeGroups) == 0x10);
}
