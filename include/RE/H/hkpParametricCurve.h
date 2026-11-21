#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkpParametricCurve :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpParametricCurve };
		inline static constexpr auto VTABLE{ VTABLE::hkpParametricCurve };
	};
	static_assert(sizeof(hkpParametricCurve) == 0x10);
}
