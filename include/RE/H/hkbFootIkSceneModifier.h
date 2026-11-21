#pragma once

#include "RE/H/hkbSceneModifier.h"

namespace RE
{
	class __declspec(novtable) hkbFootIkSceneModifier :
		public hkbSceneModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbFootIkSceneModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbFootIkSceneModifier };
	};
	static_assert(sizeof(hkbFootIkSceneModifier) == 0x10);
}
