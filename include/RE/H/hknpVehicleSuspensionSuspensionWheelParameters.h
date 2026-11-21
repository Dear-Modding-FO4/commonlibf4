#pragma once

#include "RE/H/hkVector4.h"

namespace RE
{
	class hknpVehicleSuspensionSuspensionWheelParameters
	{
	public:

		// members
		hkVector4f m_hardpointChassisSpace;  // 0x00
		hkVector4f m_directionChassisSpace;  // 0x10
		float m_length;                      // 0x20
	};
	static_assert(sizeof(hknpVehicleSuspensionSuspensionWheelParameters) == 0x30);
	static_assert(offsetof(hknpVehicleSuspensionSuspensionWheelParameters, m_hardpointChassisSpace) == 0x0);
	static_assert(offsetof(hknpVehicleSuspensionSuspensionWheelParameters, m_directionChassisSpace) == 0x10);
	static_assert(offsetof(hknpVehicleSuspensionSuspensionWheelParameters, m_length) == 0x20);
}
