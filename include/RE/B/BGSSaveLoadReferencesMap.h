#pragma once

#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTHashMap.h"

namespace RE
{
	using BGSCellNumericIDArrayMap = BSTHashMap<std::uint32_t, BSTArray<std::uint32_t, BSTArrayHeapAllocator>*>;

	class BGSSaveLoadReferencesMap
	{
	public:
		// members
		BSTHashMap<std::uint32_t, std::uint32_t>             MovedReferencesMap;       // 00
		BGSCellNumericIDArrayMap                             InteriorReferencesMap;    // 30
		BSTHashMap<std::uint32_t, BGSCellNumericIDArrayMap*> WorldspaceReferencesMap;  // 60
		BSSpinLock                                           Lock;                     // 90
	};
	static_assert(sizeof(BGSSaveLoadReferencesMap) == 0x98);
}
