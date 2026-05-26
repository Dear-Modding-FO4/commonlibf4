#pragma once

#include "RE/H/hkMemoryAllocator.h"

namespace RE
{
	class __declspec(novtable) hkLifoAllocator : public hkMemoryAllocator
	{
	public:
		static constexpr auto RTTI{ RTTI::hkLifoAllocator };
		static constexpr auto VTABLE{ VTABLE::hkLifoAllocator };
	};
}
