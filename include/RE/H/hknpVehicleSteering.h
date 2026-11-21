#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleSteering :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleSteering };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleSteering };
	};
	static_assert(sizeof(hknpVehicleSteering) == 0x10);
}
