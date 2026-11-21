#pragma once

#include "RE/H/hkbSceneModifier.h"

namespace RE
{
	class __declspec(novtable) hkbHandIkSceneModifier :
		public hkbSceneModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbHandIkSceneModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbHandIkSceneModifier };
	};
	static_assert(sizeof(hkbHandIkSceneModifier) == 0x10);
}
