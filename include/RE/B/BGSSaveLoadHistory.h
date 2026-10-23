#pragma once

#include "RE/B/BSTArray.h"

namespace RE
{
	class BGSSaveLoadHistory
	{
	public:
		// members
		BSTArray<char*, BSTArrayHeapAllocator> Notes;  // 00
	};
	static_assert(sizeof(BGSSaveLoadHistory) == 0x18);
}
