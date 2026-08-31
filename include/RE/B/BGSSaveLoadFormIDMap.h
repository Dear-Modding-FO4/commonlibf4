#pragma once

#include "RE/B/BSTHashMap.h"

namespace RE
{
	class BGSSaveLoadFormIDMap
	{
	public:
		// members
		BSTHashMap<std::uint32_t, std::uint32_t> FormIDToIndexMap;  // 00
		BSTHashMap<std::uint32_t, std::uint32_t> IndexToFormIDMap;  // 30
		std::uint32_t                            iCurrentIndex;     // 60
	};
	static_assert(sizeof(BGSSaveLoadFormIDMap) == 0x68);
}
