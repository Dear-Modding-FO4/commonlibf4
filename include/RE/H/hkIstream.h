#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkIstream :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkIstream };
		inline static constexpr auto VTABLE{ VTABLE::hkIstream };
	};
	static_assert(sizeof(hkIstream) == 0x10);
}
