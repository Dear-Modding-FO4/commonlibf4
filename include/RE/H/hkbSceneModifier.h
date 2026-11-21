#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbSceneModifier :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSceneModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbSceneModifier };
	};
	static_assert(sizeof(hkbSceneModifier) == 0x10);
}
