#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbCustomIdSelector :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCustomIdSelector };
		inline static constexpr auto VTABLE{ VTABLE::hkbCustomIdSelector };
	};
	static_assert(sizeof(hkbCustomIdSelector) == 0x10);
}
