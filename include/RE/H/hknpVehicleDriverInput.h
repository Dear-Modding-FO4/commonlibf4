#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleDriverInput :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleDriverInput };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleDriverInput };
	};
	static_assert(sizeof(hknpVehicleDriverInput) == 0x10);
}
