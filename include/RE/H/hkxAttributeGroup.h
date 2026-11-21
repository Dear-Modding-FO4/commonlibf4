#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkxAttribute;

	class hkxAttributeGroup
	{
	public:

		// members
		hkStringPtr m_name;                  // 0x00
		hkArray<hkxAttribute> m_attributes;  // 0x08
	};
	static_assert(sizeof(hkxAttributeGroup) == 0x18);
	static_assert(offsetof(hkxAttributeGroup, m_name) == 0x0);
	static_assert(offsetof(hkxAttributeGroup, m_attributes) == 0x8);
}
