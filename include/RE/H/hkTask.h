#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkTask :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTask };
		inline static constexpr auto VTABLE{ VTABLE::hkTask };
	};
	static_assert(sizeof(hkTask) == 0x10);
}
