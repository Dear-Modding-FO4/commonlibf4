#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpVehicleTransmission.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleDefaultTransmission :
		public hknpVehicleTransmission  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleDefaultTransmission };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleDefaultTransmission };

		// members
		float m_downshiftRPM;                // 0x10
		float m_upshiftRPM;                  // 0x14
		float m_primaryTransmissionRatio;    // 0x18
		float m_clutchDelayTime;             // 0x1C
		float m_reverseGearRatio;            // 0x20
		std::uint8_t pad24[0x4];             // 0x24
		hkArray<float> m_gearsRatio;         // 0x28
		hkArray<float> m_wheelsTorqueRatio;  // 0x38
	};
	static_assert(sizeof(hknpVehicleDefaultTransmission) == 0x48);
	static_assert(offsetof(hknpVehicleDefaultTransmission, m_downshiftRPM) == 0x10);
	static_assert(offsetof(hknpVehicleDefaultTransmission, m_upshiftRPM) == 0x14);
	static_assert(offsetof(hknpVehicleDefaultTransmission, m_primaryTransmissionRatio) == 0x18);
	static_assert(offsetof(hknpVehicleDefaultTransmission, m_clutchDelayTime) == 0x1C);
	static_assert(offsetof(hknpVehicleDefaultTransmission, m_reverseGearRatio) == 0x20);
	static_assert(offsetof(hknpVehicleDefaultTransmission, m_gearsRatio) == 0x28);
	static_assert(offsetof(hknpVehicleDefaultTransmission, m_wheelsTorqueRatio) == 0x38);
}
