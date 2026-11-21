#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleBrake :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleBrake };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleBrake };
	};
	static_assert(sizeof(hknpVehicleBrake) == 0x10);
}
