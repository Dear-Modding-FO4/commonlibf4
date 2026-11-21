#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkTagfileReader :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTagfileReader };
		inline static constexpr auto VTABLE{ VTABLE::hkTagfileReader };
	};
	static_assert(sizeof(hkTagfileReader) == 0x10);
}
