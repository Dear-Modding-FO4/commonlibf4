#pragma once

#include "RE/H/hkSecondaryCommandDispatcher.h"

namespace RE
{
	class hknpWorld;

	class __declspec(novtable) hknpApiCommandProcessor :
		public hkSecondaryCommandDispatcher  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpApiCommandProcessor };
		inline static constexpr auto VTABLE{ VTABLE::hknpApiCommandProcessor };

		// members
		hknpWorld* m_world;  // 0x10
	};
	static_assert(sizeof(hknpApiCommandProcessor) == 0x18);
	static_assert(offsetof(hknpApiCommandProcessor, m_world) == 0x10);
}
