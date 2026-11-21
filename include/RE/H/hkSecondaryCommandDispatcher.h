#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkSecondaryCommandDispatcher :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkSecondaryCommandDispatcher };
		inline static constexpr auto VTABLE{ VTABLE::hkSecondaryCommandDispatcher };
	};
	static_assert(sizeof(hkSecondaryCommandDispatcher) == 0x10);
}
