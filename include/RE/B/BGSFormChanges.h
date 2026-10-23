#pragma once

#include "RE/B/BGSChangeFlags.h"
#include "RE/B/BGSUnloadedFromBuffer.h"

namespace RE
{
	class BGSFormChanges
	{
	public:
		// members
		BGSChangeFlags        iChangeFlags;        // 00
		BGSUnloadedFormBuffer UnloadedFormBuffer;  // 08
	};
	static_assert(sizeof(BGSFormChanges) == 0x10);
}
