#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkxEnumItem
	{
	public:

		// members
		std::int32_t m_value;     // 0x00
		std::uint8_t unk04[0x4];  // 0x04
		hkStringPtr m_name;       // 0x08
	};
	static_assert(sizeof(hkxEnumItem) == 0x10);
	static_assert(offsetof(hkxEnumItem, m_value) == 0x0);
	static_assert(offsetof(hkxEnumItem, m_name) == 0x8);
}
