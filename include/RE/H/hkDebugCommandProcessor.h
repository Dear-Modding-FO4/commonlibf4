#pragma once

#include "RE/H/hkSecondaryCommandDispatcher.h"

namespace RE
{
	class __declspec(novtable) hkDebugCommandProcessor :
		public hkSecondaryCommandDispatcher  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDebugCommandProcessor };
		inline static constexpr auto VTABLE{ VTABLE::hkDebugCommandProcessor };
	};
	static_assert(sizeof(hkDebugCommandProcessor) == 0x10);
}
