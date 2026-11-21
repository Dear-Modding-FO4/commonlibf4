#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleTransmission :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleTransmission };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleTransmission };
	};
	static_assert(sizeof(hknpVehicleTransmission) == 0x10);
}
