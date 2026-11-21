#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkThreadPool :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkThreadPool };
		inline static constexpr auto VTABLE{ VTABLE::hkThreadPool };
	};
	static_assert(sizeof(hkThreadPool) == 0x10);
}
