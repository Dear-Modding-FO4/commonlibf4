#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpVehicleBrake.h"

namespace RE
{
	class hknpVehicleDefaultBrakeWheelBrakingProperties;

	class __declspec(novtable) hknpVehicleDefaultBrake :
		public hknpVehicleBrake  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleDefaultBrake };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleDefaultBrake };

		// members
		hkArray<hknpVehicleDefaultBrakeWheelBrakingProperties> m_wheelBrakingProperties;  // 0x10
		float m_wheelsMinTimeToBlock;                                                     // 0x20
	};
	static_assert(sizeof(hknpVehicleDefaultBrake) == 0x28);
	static_assert(offsetof(hknpVehicleDefaultBrake, m_wheelBrakingProperties) == 0x10);
	static_assert(offsetof(hknpVehicleDefaultBrake, m_wheelsMinTimeToBlock) == 0x20);
}
