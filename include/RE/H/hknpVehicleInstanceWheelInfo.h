#pragma once

#include "RE/H/hkContactPoint.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hknpVehicleInstanceWheelInfo
	{
	public:

		// members
		hkContactPoint m_contactPoint;                    // 0x00
		float m_contactFriction;                          // 0x20
		std::uint32_t m_contactBodyId;                    // 0x24
		std::uint32_t m_contactShapeKey;                  // 0x28
		std::uint8_t unk2C[0x4];                          // 0x2C
		hkVector4f m_hardPointWs;                         // 0x30
		hkVector4f m_rayEndPointWs;                       // 0x40
		float m_currentSuspensionLength;                  // 0x50
		std::uint8_t unk54[0xC];                          // 0x54
		hkVector4f m_suspensionDirectionWs;               // 0x60
		hkVector4f m_spinAxisChassisSpace;                // 0x70
		hkVector4f m_spinAxisWs;                          // 0x80
		hkQuaternionf m_steeringOrientationChassisSpace;  // 0x90
		float m_spinVelocity;                             // 0xA0
		float m_noSlipIdealSpinVelocity;                  // 0xA4
		float m_spinAngle;                                // 0xA8
		float m_skidEnergyDensity;                        // 0xAC
		float m_sideForce;                                // 0xB0
		float m_forwardSlipVelocity;                      // 0xB4
		float m_sideSlipVelocity;                         // 0xB8
	};
	static_assert(sizeof(hknpVehicleInstanceWheelInfo) == 0xC0);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_contactPoint) == 0x0);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_contactFriction) == 0x20);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_contactBodyId) == 0x24);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_contactShapeKey) == 0x28);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_hardPointWs) == 0x30);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_rayEndPointWs) == 0x40);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_currentSuspensionLength) == 0x50);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_suspensionDirectionWs) == 0x60);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_spinAxisChassisSpace) == 0x70);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_spinAxisWs) == 0x80);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_steeringOrientationChassisSpace) == 0x90);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_spinVelocity) == 0xA0);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_noSlipIdealSpinVelocity) == 0xA4);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_spinAngle) == 0xA8);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_skidEnergyDensity) == 0xAC);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_sideForce) == 0xB0);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_forwardSlipVelocity) == 0xB4);
	static_assert(offsetof(hknpVehicleInstanceWheelInfo, m_sideSlipVelocity) == 0xB8);
}
