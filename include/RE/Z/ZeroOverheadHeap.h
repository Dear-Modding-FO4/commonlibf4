#pragma once

#include "RE/I/IMemoryHeap.h"

namespace RE
{
	class __declspec(novtable) ZeroOverheadHeap : public IMemoryHeap
	{
	public:
		static constexpr auto RTTI{ RTTI::ZeroOverheadHeap };
		static constexpr auto VTABLE{ VTABLE::ZeroOverheadHeap };
	};
}
