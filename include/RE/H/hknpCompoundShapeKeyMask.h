#pragma once

#include "RE/H/hknpShapeKeyMask.h"

namespace RE
{
	class __declspec(novtable) hknpCompoundShapeKeyMask :
		public hknpShapeKeyMask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCompoundShapeKeyMask };
		inline static constexpr auto VTABLE{ VTABLE::hknpCompoundShapeKeyMask };
	};
	static_assert(sizeof(hknpCompoundShapeKeyMask) == 0x8);
}
