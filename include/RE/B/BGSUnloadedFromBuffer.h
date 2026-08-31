#pragma once

#include "RE/B/BGSSaveLoadBuffer.h"

namespace RE
{
	class BGSUnloadedFormBuffer
	{
	public:
		// members
		BGSSaveLoadBuffer Buffer;  // 00
	};
	static_assert(sizeof(BGSUnloadedFormBuffer) == 0x8);
}
