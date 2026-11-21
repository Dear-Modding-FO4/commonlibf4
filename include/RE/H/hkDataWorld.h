#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkDataWorld :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataWorld };
		inline static constexpr auto VTABLE{ VTABLE::hkDataWorld };
	};
	static_assert(sizeof(hkDataWorld) == 0x10);
}
