#pragma once

#include "RE/H/hkpVehicleFrictionStatusAxisStatus.h"

namespace RE
{
	class hkpVehicleFrictionStatus
	{
	public:

		// members
		hkpVehicleFrictionStatusAxisStatus m_axis[2];  // 0x00
	};
	static_assert(sizeof(hkpVehicleFrictionStatus) == 0x48);
	static_assert(offsetof(hkpVehicleFrictionStatus, m_axis) == 0x0);
}
