#pragma once

namespace RE
{
	class hknpVehicleDataWheelComponentParams
	{
	public:

		// members
		float m_radius;                      // 0x00
		float m_mass;                        // 0x04
		float m_width;                       // 0x08
		float m_friction;                    // 0x0C
		float m_viscosityFriction;           // 0x10
		float m_maxFriction;                 // 0x14
		float m_slipAngle;                   // 0x18
		float m_forceFeedbackMultiplier;     // 0x1C
		float m_maxContactBodyAcceleration;  // 0x20
		std::int8_t m_axle;                  // 0x24
	};
	static_assert(sizeof(hknpVehicleDataWheelComponentParams) == 0x28);
	static_assert(offsetof(hknpVehicleDataWheelComponentParams, m_radius) == 0x0);
	static_assert(offsetof(hknpVehicleDataWheelComponentParams, m_mass) == 0x4);
	static_assert(offsetof(hknpVehicleDataWheelComponentParams, m_width) == 0x8);
	static_assert(offsetof(hknpVehicleDataWheelComponentParams, m_friction) == 0xC);
	static_assert(offsetof(hknpVehicleDataWheelComponentParams, m_viscosityFriction) == 0x10);
	static_assert(offsetof(hknpVehicleDataWheelComponentParams, m_maxFriction) == 0x14);
	static_assert(offsetof(hknpVehicleDataWheelComponentParams, m_slipAngle) == 0x18);
	static_assert(offsetof(hknpVehicleDataWheelComponentParams, m_forceFeedbackMultiplier) == 0x1C);
	static_assert(offsetof(hknpVehicleDataWheelComponentParams, m_maxContactBodyAcceleration) == 0x20);
	static_assert(offsetof(hknpVehicleDataWheelComponentParams, m_axle) == 0x24);
}
