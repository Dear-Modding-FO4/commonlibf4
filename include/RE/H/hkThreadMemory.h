#pragma once

#include "RE/H/hkMemoryAllocator.h"

namespace RE
{
	class __declspec(novtable) hkThreadMemory : public hkMemoryAllocator
	{
	public:
		static constexpr auto RTTI{ RTTI::hkThreadMemory };
		static constexpr auto VTABLE{ VTABLE::hkThreadMemory };
	};
}
