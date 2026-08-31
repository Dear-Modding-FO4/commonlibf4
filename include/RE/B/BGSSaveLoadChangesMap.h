#pragma once

#include "RE/B/BGSFormChanges.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTHashMap.h"

namespace RE
{
	class BGSSaveLoadChangesMap :
		public BSTHashMap<std::uint32_t, BGSFormChanges>  // 00
	{
	public:
		// members
		BSReadWriteLock RWLock;  // 30
	};
	static_assert(sizeof(BGSSaveLoadChangesMap) == 0x38);
}
