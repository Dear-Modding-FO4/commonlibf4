#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkTagfileWriter :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTagfileWriter };
		inline static constexpr auto VTABLE{ VTABLE::hkTagfileWriter };
	};
	static_assert(sizeof(hkTagfileWriter) == 0x10);
}
