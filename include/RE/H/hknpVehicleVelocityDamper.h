#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleVelocityDamper :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleVelocityDamper };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleVelocityDamper };
	};
	static_assert(sizeof(hknpVehicleVelocityDamper) == 0x10);
}
