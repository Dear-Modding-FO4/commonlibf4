#pragma once

#include "RE/H/hkDataRefCounted.h"

namespace RE
{
	class __declspec(novtable) hkDataClassImpl :
		public hkDataRefCounted  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataClassImpl };
		inline static constexpr auto VTABLE{ VTABLE::hkDataClassImpl };
	};
	static_assert(sizeof(hkDataClassImpl) == 0x10);
}
