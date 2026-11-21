#pragma once

#include "RE/H/hkAabb.h"
#include "RE/H/hkTransform.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hknpShape;

	class hknpVehicleLinearCastWheelCollideWheelState
	{
	public:

		// members
		hkAabb m_aabb;             // 0x00
		hknpShape* m_shape;        // 0x20
		std::uint8_t unk28[0x8];   // 0x28
		hkTransformf m_transform;  // 0x30
		hkVector4f m_to;           // 0x70
	};
	static_assert(sizeof(hknpVehicleLinearCastWheelCollideWheelState) == 0x80);
	static_assert(offsetof(hknpVehicleLinearCastWheelCollideWheelState, m_aabb) == 0x0);
	static_assert(offsetof(hknpVehicleLinearCastWheelCollideWheelState, m_shape) == 0x20);
	static_assert(offsetof(hknpVehicleLinearCastWheelCollideWheelState, m_transform) == 0x30);
	static_assert(offsetof(hknpVehicleLinearCastWheelCollideWheelState, m_to) == 0x70);
}
