#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleSuspension :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleSuspension };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleSuspension };
	};
	static_assert(sizeof(hknpVehicleSuspension) == 0x10);
}
