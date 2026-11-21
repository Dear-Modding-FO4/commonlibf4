#pragma once

#include "RE/H/hkcdDynamicTreeDynamicStorage32.h"

namespace RE
{
	class hkcdDynamicTreeTree_DynamicStorage32 :
		public hkcdDynamicTreeDynamicStorage32  // 0x00
	{
	public:

		// members
		std::uint32_t m_numLeaves;  // 0x18
		std::uint32_t m_path;       // 0x1C
		std::uint32_t m_root;       // 0x20
	};
	static_assert(sizeof(hkcdDynamicTreeTree_DynamicStorage32) == 0x28);
	static_assert(offsetof(hkcdDynamicTreeTree_DynamicStorage32, m_numLeaves) == 0x18);
	static_assert(offsetof(hkcdDynamicTreeTree_DynamicStorage32, m_path) == 0x1C);
	static_assert(offsetof(hkcdDynamicTreeTree_DynamicStorage32, m_root) == 0x20);
}
