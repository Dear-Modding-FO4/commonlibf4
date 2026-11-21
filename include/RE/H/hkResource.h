#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkResource :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkResource };
		inline static constexpr auto VTABLE{ VTABLE::hkResource };
	};
	static_assert(sizeof(hkResource) == 0x10);
}
