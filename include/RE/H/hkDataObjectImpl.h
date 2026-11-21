#pragma once

#include "RE/H/hkDataRefCounted.h"

namespace RE
{
	class __declspec(novtable) hkDataObjectImpl :
		public hkDataRefCounted  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataObjectImpl };
		inline static constexpr auto VTABLE{ VTABLE::hkDataObjectImpl };
	};
	static_assert(sizeof(hkDataObjectImpl) == 0x10);
}
