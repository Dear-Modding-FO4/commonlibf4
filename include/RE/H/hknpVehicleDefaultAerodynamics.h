#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hknpVehicleAerodynamics.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleDefaultAerodynamics :
		public hknpVehicleAerodynamics  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleDefaultAerodynamics };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleDefaultAerodynamics };

		// members
		float m_airDensity;           // 0x10
		float m_frontalArea;          // 0x14
		float m_dragCoefficient;      // 0x18
		float m_liftCoefficient;      // 0x1C
		hkVector4f m_extraGravityws;  // 0x20
	};
	static_assert(sizeof(hknpVehicleDefaultAerodynamics) == 0x30);
	static_assert(offsetof(hknpVehicleDefaultAerodynamics, m_airDensity) == 0x10);
	static_assert(offsetof(hknpVehicleDefaultAerodynamics, m_frontalArea) == 0x14);
	static_assert(offsetof(hknpVehicleDefaultAerodynamics, m_dragCoefficient) == 0x18);
	static_assert(offsetof(hknpVehicleDefaultAerodynamics, m_liftCoefficient) == 0x1C);
	static_assert(offsetof(hknpVehicleDefaultAerodynamics, m_extraGravityws) == 0x20);
}
