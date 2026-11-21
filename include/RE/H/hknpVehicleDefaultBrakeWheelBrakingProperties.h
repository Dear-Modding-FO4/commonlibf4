#pragma once

namespace RE
{
	class hknpVehicleDefaultBrakeWheelBrakingProperties
	{
	public:

		// members
		float m_maxBreakingTorque;      // 0x00
		float m_minPedalInputToBlock;   // 0x04
		bool m_isConnectedToHandbrake;  // 0x08
	};
	static_assert(sizeof(hknpVehicleDefaultBrakeWheelBrakingProperties) == 0xC);
	static_assert(offsetof(hknpVehicleDefaultBrakeWheelBrakingProperties, m_maxBreakingTorque) == 0x0);
	static_assert(offsetof(hknpVehicleDefaultBrakeWheelBrakingProperties, m_minPedalInputToBlock) == 0x4);
	static_assert(offsetof(hknpVehicleDefaultBrakeWheelBrakingProperties, m_isConnectedToHandbrake) == 0x8);
}
