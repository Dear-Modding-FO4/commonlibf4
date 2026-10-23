#pragma once

#include "RE/B/BGSSaveLoadBuffer.h"

namespace RE
{
	class BGSLoadGameSubBuffer
	{
	public:
		// members
		BGSSaveLoadBuffer Buffer;  // 00
	};
	static_assert(sizeof(BGSLoadGameSubBuffer) == 0x8);
}
