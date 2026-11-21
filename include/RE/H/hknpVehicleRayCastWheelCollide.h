#pragma once

#include "RE/H/hknpVehicleWheelCollide.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleRayCastWheelCollide :
		public hknpVehicleWheelCollide  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleRayCastWheelCollide };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleRayCastWheelCollide };

		// members
		std::uint16_t unk10;  // 0x10
		std::uint8_t pad12[0x2];  // 0x12
		std::uint32_t unk14;  // 0x14
	};
	static_assert(sizeof(hknpVehicleRayCastWheelCollide) == 0x18);
	static_assert(offsetof(hknpVehicleRayCastWheelCollide, unk10) == 0x10);
	static_assert(offsetof(hknpVehicleRayCastWheelCollide, pad12) == 0x12);
	static_assert(offsetof(hknpVehicleRayCastWheelCollide, unk14) == 0x14);
}
