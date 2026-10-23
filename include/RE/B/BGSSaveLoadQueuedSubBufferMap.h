#pragma once

#include "RE/B/BGSLoadGameSubBuffer.h"
#include "RE/B/BSTHashMap.h"

namespace RE
{
	class TESForm;

	class BGSSaveLoadQueuedSubBufferMap
	{
	public:
		// members
		BSTHashMap<TESForm*, BGSLoadGameSubBuffer> QueuedSubBuffers[3];  // 00
	};
	static_assert(sizeof(BGSSaveLoadQueuedSubBufferMap) == 0x90);
}
