#pragma once

#include "RE/I/IMemoryHeap.h"

namespace RE
{
	class __declspec(novtable) AbstractHeap : public IMemoryHeap
	{
	public:
		static constexpr auto RTTI{ RTTI::AbstractHeap };
		static constexpr auto VTABLE{ VTABLE::AbstractHeap };
	};
}
