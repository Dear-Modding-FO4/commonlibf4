#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkBlockStreamAllocator :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkBlockStreamAllocator };
		inline static constexpr auto VTABLE{ VTABLE::hkBlockStreamAllocator };
	};
	static_assert(sizeof(hkBlockStreamAllocator) == 0x10);
}
