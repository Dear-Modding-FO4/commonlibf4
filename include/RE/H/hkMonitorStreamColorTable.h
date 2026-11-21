#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkMonitorStreamColorTableColorPair;

	class __declspec(novtable) hkMonitorStreamColorTable :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMonitorStreamColorTable };
		inline static constexpr auto VTABLE{ VTABLE::hkMonitorStreamColorTable };

		// members
		hkArray<hkMonitorStreamColorTableColorPair> m_colorPairs;  // 0x10
		std::uint32_t m_defaultColor;                              // 0x20
	};
	static_assert(sizeof(hkMonitorStreamColorTable) == 0x28);
	static_assert(offsetof(hkMonitorStreamColorTable, m_colorPairs) == 0x10);
	static_assert(offsetof(hkMonitorStreamColorTable, m_defaultColor) == 0x20);
}
