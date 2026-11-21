#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbCustomIdSelector.h"

namespace RE
{
	class __declspec(novtable) hkbTestIdSelector :
		public hkbCustomIdSelector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbTestIdSelector };
		inline static constexpr auto VTABLE{ VTABLE::hkbTestIdSelector };

		// members
		std::int32_t m_int;    // 0x10
		float m_real;          // 0x14
		hkStringPtr m_string;  // 0x18
	};
	static_assert(sizeof(hkbTestIdSelector) == 0x20);
	static_assert(offsetof(hkbTestIdSelector, m_int) == 0x10);
	static_assert(offsetof(hkbTestIdSelector, m_real) == 0x14);
	static_assert(offsetof(hkbTestIdSelector, m_string) == 0x18);
}
