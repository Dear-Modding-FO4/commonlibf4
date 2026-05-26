#pragma once

#include "RE/H/hkMemoryAllocator.h"

namespace RE
{
	class __declspec(novtable) hkMallocAllocator : public hkMemoryAllocator
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMallocAllocator };
		static constexpr auto VTABLE{ VTABLE::hkMallocAllocator };
	};
}
