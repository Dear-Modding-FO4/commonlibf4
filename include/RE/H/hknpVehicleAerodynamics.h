#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleAerodynamics :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleAerodynamics };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleAerodynamics };
	};
	static_assert(sizeof(hknpVehicleAerodynamics) == 0x10);
}
