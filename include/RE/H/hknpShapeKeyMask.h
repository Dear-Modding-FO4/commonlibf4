#pragma once

#include "RE/H/hkBaseObject.h"

namespace RE
{
	class __declspec(novtable) hknpShapeKeyMask :
		public hkBaseObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpShapeKeyMask };
		inline static constexpr auto VTABLE{ VTABLE::hknpShapeKeyMask };
	};
	static_assert(sizeof(hknpShapeKeyMask) == 0x8);
}
