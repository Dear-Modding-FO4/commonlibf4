#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpVehicleSteering.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleDefaultSteering :
		public hknpVehicleSteering  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleDefaultSteering };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleDefaultSteering };

		// members
		float m_maxSteeringAngle;           // 0x10
		float m_maxSpeedFullSteeringAngle;  // 0x14
		hkArray<bool> m_doesWheelSteer;     // 0x18
	};
	static_assert(sizeof(hknpVehicleDefaultSteering) == 0x28);
	static_assert(offsetof(hknpVehicleDefaultSteering, m_maxSteeringAngle) == 0x10);
	static_assert(offsetof(hknpVehicleDefaultSteering, m_maxSpeedFullSteeringAngle) == 0x14);
	static_assert(offsetof(hknpVehicleDefaultSteering, m_doesWheelSteer) == 0x18);
}
