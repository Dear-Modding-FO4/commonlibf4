#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpVehicleWheelCollide.h"

namespace RE
{
	class hknpVehicleLinearCastWheelCollideWheelState;

	class __declspec(novtable) hknpVehicleLinearCastWheelCollide :
		public hknpVehicleWheelCollide  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleLinearCastWheelCollide };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleLinearCastWheelCollide };

		// members
		std::uint8_t unk10[0x8];                                             // 0x10
		hkArray<hknpVehicleLinearCastWheelCollideWheelState> m_wheelStates;  // 0x18
		float m_maxExtraPenetration;                                         // 0x28
		float m_startPointTolerance;                                         // 0x2C
		std::uint32_t m_chassisBody;                                         // 0x30
	};
	static_assert(sizeof(hknpVehicleLinearCastWheelCollide) == 0x38);
	static_assert(offsetof(hknpVehicleLinearCastWheelCollide, m_wheelStates) == 0x18);
	static_assert(offsetof(hknpVehicleLinearCastWheelCollide, m_maxExtraPenetration) == 0x28);
	static_assert(offsetof(hknpVehicleLinearCastWheelCollide, m_startPointTolerance) == 0x2C);
	static_assert(offsetof(hknpVehicleLinearCastWheelCollide, m_chassisBody) == 0x30);
}
