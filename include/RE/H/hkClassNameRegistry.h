#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkClassNameRegistry :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkClassNameRegistry };
		inline static constexpr auto VTABLE{ VTABLE::hkClassNameRegistry };
	};
	static_assert(sizeof(hkClassNameRegistry) == 0x10);
}
