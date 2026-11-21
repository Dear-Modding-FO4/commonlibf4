#pragma once

namespace RE
{
	class hknpVehicleDefaultSuspensionWheelSpringSuspensionParameters
	{
	public:

		// members
		float m_strength;            // 0x00
		float m_dampingCompression;  // 0x04
		float m_dampingRelaxation;   // 0x08
	};
	static_assert(sizeof(hknpVehicleDefaultSuspensionWheelSpringSuspensionParameters) == 0xC);
	static_assert(offsetof(hknpVehicleDefaultSuspensionWheelSpringSuspensionParameters, m_strength) == 0x0);
	static_assert(offsetof(hknpVehicleDefaultSuspensionWheelSpringSuspensionParameters, m_dampingCompression) == 0x4);
	static_assert(offsetof(hknpVehicleDefaultSuspensionWheelSpringSuspensionParameters, m_dampingRelaxation) == 0x8);
}
