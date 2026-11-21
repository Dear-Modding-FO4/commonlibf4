#pragma once

#include "RE/H/hknpVehicleDriverInputStatus.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleDriverInputAnalogStatus :
		public hknpVehicleDriverInputStatus  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleDriverInputAnalogStatus };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleDriverInputAnalogStatus };

		// members
		float m_positionX;              // 0x10
		float m_positionY;              // 0x14
		bool m_handbrakeButtonPressed;  // 0x18
		bool m_reverseButtonPressed;    // 0x19
	};
	static_assert(sizeof(hknpVehicleDriverInputAnalogStatus) == 0x20);
	static_assert(offsetof(hknpVehicleDriverInputAnalogStatus, m_positionX) == 0x10);
	static_assert(offsetof(hknpVehicleDriverInputAnalogStatus, m_positionY) == 0x14);
	static_assert(offsetof(hknpVehicleDriverInputAnalogStatus, m_handbrakeButtonPressed) == 0x18);
	static_assert(offsetof(hknpVehicleDriverInputAnalogStatus, m_reverseButtonPressed) == 0x19);
}
