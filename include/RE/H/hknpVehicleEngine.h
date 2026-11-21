#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleEngine :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleEngine };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleEngine };
	};
	static_assert(sizeof(hknpVehicleEngine) == 0x10);
}
