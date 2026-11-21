#pragma once

#include "RE/H/hknpVehicleEngine.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleDefaultEngine :
		public hknpVehicleEngine  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleDefaultEngine };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleDefaultEngine };

		// members
		float m_minRPM;                    // 0x10
		float m_optRPM;                    // 0x14
		float m_maxRPM;                    // 0x18
		float m_maxTorque;                 // 0x1C
		float m_torqueFactorAtMinRPM;      // 0x20
		float m_torqueFactorAtMaxRPM;      // 0x24
		float m_resistanceFactorAtMinRPM;  // 0x28
		float m_resistanceFactorAtOptRPM;  // 0x2C
		float m_resistanceFactorAtMaxRPM;  // 0x30
		float m_clutchSlipRPM;             // 0x34
	};
	static_assert(sizeof(hknpVehicleDefaultEngine) == 0x38);
	static_assert(offsetof(hknpVehicleDefaultEngine, m_minRPM) == 0x10);
	static_assert(offsetof(hknpVehicleDefaultEngine, m_optRPM) == 0x14);
	static_assert(offsetof(hknpVehicleDefaultEngine, m_maxRPM) == 0x18);
	static_assert(offsetof(hknpVehicleDefaultEngine, m_maxTorque) == 0x1C);
	static_assert(offsetof(hknpVehicleDefaultEngine, m_torqueFactorAtMinRPM) == 0x20);
	static_assert(offsetof(hknpVehicleDefaultEngine, m_torqueFactorAtMaxRPM) == 0x24);
	static_assert(offsetof(hknpVehicleDefaultEngine, m_resistanceFactorAtMinRPM) == 0x28);
	static_assert(offsetof(hknpVehicleDefaultEngine, m_resistanceFactorAtOptRPM) == 0x2C);
	static_assert(offsetof(hknpVehicleDefaultEngine, m_resistanceFactorAtMaxRPM) == 0x30);
	static_assert(offsetof(hknpVehicleDefaultEngine, m_clutchSlipRPM) == 0x34);
}
