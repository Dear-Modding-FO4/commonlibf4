#pragma once

#include "RE/H/hkMemoryAllocator.h"

namespace RE
{
	class __declspec(novtable) hkSolverAllocator : public hkMemoryAllocator
	{
	public:
		static constexpr auto RTTI{ RTTI::hkSolverAllocator };
		static constexpr auto VTABLE{ VTABLE::hkSolverAllocator };
	};
}
