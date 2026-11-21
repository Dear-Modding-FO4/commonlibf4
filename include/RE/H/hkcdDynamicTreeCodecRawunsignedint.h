#pragma once

#include "RE/H/hkAabb.h"

namespace RE
{
	class hkcdDynamicTreeCodecRawunsignedint
	{
	public:

		// members
		hkAabb m_aabb;                // 0x00
		std::uint32_t m_parent;       // 0x20
		std::uint32_t m_children[2];  // 0x24
	};
	static_assert(sizeof(hkcdDynamicTreeCodecRawunsignedint) == 0x30);
	static_assert(offsetof(hkcdDynamicTreeCodecRawunsignedint, m_aabb) == 0x0);
	static_assert(offsetof(hkcdDynamicTreeCodecRawunsignedint, m_parent) == 0x20);
	static_assert(offsetof(hkcdDynamicTreeCodecRawunsignedint, m_children) == 0x24);
}
