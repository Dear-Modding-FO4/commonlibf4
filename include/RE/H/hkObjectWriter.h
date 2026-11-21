#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkObjectWriter :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkObjectWriter };
		inline static constexpr auto VTABLE{ VTABLE::hkObjectWriter };
	};
	static_assert(sizeof(hkObjectWriter) == 0x10);
}
