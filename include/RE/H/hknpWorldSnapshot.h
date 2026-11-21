#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpWorldSnapshot :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpWorldSnapshot };
		inline static constexpr auto VTABLE{ VTABLE::hknpWorldSnapshot };
	};
	static_assert(sizeof(hknpWorldSnapshot) == 0x10);
}
