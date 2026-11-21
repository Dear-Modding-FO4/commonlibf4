#pragma once

#include "RE/H/hknpVehicleDriverInput.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleDefaultAnalogDriverInput :
		public hknpVehicleDriverInput  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleDefaultAnalogDriverInput };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleDefaultAnalogDriverInput };

		// members
		float m_slopeChangePointX;  // 0x10
		float m_initialSlope;       // 0x14
		float m_deadZone;           // 0x18
		bool m_autoReverse;         // 0x1C
	};
	static_assert(sizeof(hknpVehicleDefaultAnalogDriverInput) == 0x20);
	static_assert(offsetof(hknpVehicleDefaultAnalogDriverInput, m_slopeChangePointX) == 0x10);
	static_assert(offsetof(hknpVehicleDefaultAnalogDriverInput, m_initialSlope) == 0x14);
	static_assert(offsetof(hknpVehicleDefaultAnalogDriverInput, m_deadZone) == 0x18);
	static_assert(offsetof(hknpVehicleDefaultAnalogDriverInput, m_autoReverse) == 0x1C);
}
