#pragma once

#include "RE/H/hkMemoryTracker.h"

namespace RE
{
	class __declspec(novtable) hkDummyMemoryTrackerImpl :
		public hkMemoryTracker  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDummyMemoryTrackerImpl };
		inline static constexpr auto VTABLE{ VTABLE::hkDummyMemoryTrackerImpl };
	};
	static_assert(sizeof(hkDummyMemoryTrackerImpl) == 0x8);
}
