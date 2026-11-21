#pragma once

#include "RE/H/hkDataRefCounted.h"

namespace RE
{
	class __declspec(novtable) hkDataArrayImpl :
		public hkDataRefCounted  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataArrayImpl };
		inline static constexpr auto VTABLE{ VTABLE::hkDataArrayImpl };
	};
	static_assert(sizeof(hkDataArrayImpl) == 0x10);
}
