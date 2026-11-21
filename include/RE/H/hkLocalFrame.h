#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkLocalFrame :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkLocalFrame };
		inline static constexpr auto VTABLE{ VTABLE::hkLocalFrame };
	};
	static_assert(sizeof(hkLocalFrame) == 0x10);
}
