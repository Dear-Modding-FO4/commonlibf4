#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkImage :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkImage };
		inline static constexpr auto VTABLE{ VTABLE::hkImage };
	};
	static_assert(sizeof(hkImage) == 0x10);
}
