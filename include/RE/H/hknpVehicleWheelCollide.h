#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleWheelCollide :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleWheelCollide };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleWheelCollide };
		enum class WheelCollideType : std::uint32_t
		{
			kInvalidWheelCollide = 0,
			kRayCastWheelCollide = 1,
			kLinearCastWheelCollide = 2,
			kUserWheelCollide1 = 3,
			kUserWheelCollide2 = 4,
			kUserWheelCollide3 = 5,
			kUserWheelCollide4 = 6,
			kUserWheelCollide5 = 7
		};

	};
	static_assert(sizeof(hknpVehicleWheelCollide) == 0x10);
}
