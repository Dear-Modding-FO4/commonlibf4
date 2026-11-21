#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleDriverInputStatus :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleDriverInputStatus };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleDriverInputStatus };
	};
	static_assert(sizeof(hknpVehicleDriverInputStatus) == 0x10);
}
