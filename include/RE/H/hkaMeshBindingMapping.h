#pragma once

#include "RE/H/hkArray.h"

namespace RE
{
	class hkaMeshBindingMapping
	{
	public:

		// members
		hkArray<std::int16_t> m_mapping;  // 0x00
	};
	static_assert(sizeof(hkaMeshBindingMapping) == 0x10);
	static_assert(offsetof(hkaMeshBindingMapping, m_mapping) == 0x0);
}
