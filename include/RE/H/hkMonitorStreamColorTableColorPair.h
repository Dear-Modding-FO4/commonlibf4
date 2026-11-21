#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkMonitorStreamColorTableColorPair
	{
	public:

		// members
		hkStringPtr m_colorName;  // 0x00
		std::uint32_t m_color;    // 0x08
	};
	static_assert(sizeof(hkMonitorStreamColorTableColorPair) == 0x10);
	static_assert(offsetof(hkMonitorStreamColorTableColorPair, m_colorName) == 0x0);
	static_assert(offsetof(hkMonitorStreamColorTableColorPair, m_color) == 0x8);
}
