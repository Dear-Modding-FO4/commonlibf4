#pragma once

#include "RE/H/hknpVehicleVelocityDamper.h"

namespace RE
{
	class __declspec(novtable) hknpVehicleDefaultVelocityDamper :
		public hknpVehicleVelocityDamper  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleDefaultVelocityDamper };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleDefaultVelocityDamper };

		// members
		float m_normalSpinDamping;     // 0x10
		float m_collisionSpinDamping;  // 0x14
		float m_collisionThreshold;    // 0x18
	};
	static_assert(sizeof(hknpVehicleDefaultVelocityDamper) == 0x20);
	static_assert(offsetof(hknpVehicleDefaultVelocityDamper, m_normalSpinDamping) == 0x10);
	static_assert(offsetof(hknpVehicleDefaultVelocityDamper, m_collisionSpinDamping) == 0x14);
	static_assert(offsetof(hknpVehicleDefaultVelocityDamper, m_collisionThreshold) == 0x18);
}
