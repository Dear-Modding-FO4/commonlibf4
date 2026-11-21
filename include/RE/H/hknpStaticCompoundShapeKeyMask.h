#pragma once

#include "RE/H/hknpCompoundShapeInternalsKeyMask.h"

namespace RE
{
	class __declspec(novtable) hknpStaticCompoundShapeKeyMask :
		public hknpCompoundShapeInternalsKeyMask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpStaticCompoundShapeKeyMask };
		inline static constexpr auto VTABLE{ VTABLE::hknpStaticCompoundShapeKeyMask };
	};
	static_assert(sizeof(hknpStaticCompoundShapeKeyMask) == 0x30);
}
