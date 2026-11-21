#pragma once

#include "RE/H/hkbSceneModifier.h"

namespace RE
{
	class __declspec(novtable) hkbDockingSceneModifier :
		public hkbSceneModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbDockingSceneModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbDockingSceneModifier };
	};
	static_assert(sizeof(hkbDockingSceneModifier) == 0x10);
}
