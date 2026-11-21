#pragma once

#include "RE/H/hkbSceneModifier.h"

namespace RE
{
	class __declspec(novtable) hkbHandIkFixupSceneModifier :
		public hkbSceneModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbHandIkFixupSceneModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbHandIkFixupSceneModifier };
	};
	static_assert(sizeof(hkbHandIkFixupSceneModifier) == 0x10);
}
