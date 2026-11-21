#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkRotation.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpVehicleFrictionDescription.h"

namespace RE
{
	class hknpVehicleDataWheelComponentParams;

	class __declspec(novtable) hknpVehicleData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleData };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleData };

		// add
		virtual void init();  // 0x20 [04] (const hkArray<struct hknpVehicleSuspension::SuspensionWheelParameters>& suspensionWheelParams, const hkTransform& chassisTransform, const hknpMotion& motion)

		// members
		hkVector4f m_gravity;                                        // 0x10
		std::int8_t m_numWheels;                                     // 0x20
		std::uint8_t unk21[0xF];                                     // 0x21
		hkRotationf m_chassisOrientation;                            // 0x30
		float m_torqueRollFactor;                                    // 0x60
		float m_torquePitchFactor;                                   // 0x64
		float m_torqueYawFactor;                                     // 0x68
		float m_extraTorqueFactor;                                   // 0x6C
		float m_maxVelocityForPositionalFriction;                    // 0x70
		float m_chassisUnitInertiaYaw;                               // 0x74
		float m_chassisUnitInertiaRoll;                              // 0x78
		float m_chassisUnitInertiaPitch;                             // 0x7C
		float m_frictionEqualizer;                                   // 0x80
		float m_normalClippingAngleCos;                              // 0x84
		float m_maxFrictionSolverMassRatio;                          // 0x88
		std::uint8_t pad8C[0x4];                                     // 0x8C
		hkArray<hknpVehicleDataWheelComponentParams> m_wheelParams;  // 0x90
		hkArray<std::int8_t> m_numWheelsPerAxle;                     // 0xA0
		hkpVehicleFrictionDescription m_frictionDescription;         // 0xB0
		hkVector4f m_chassisFrictionInertiaInvDiag;                  // 0x190
		bool m_alreadyInitialised;                                   // 0x1A0
	};
	static_assert(sizeof(hknpVehicleData) == 0x1B0);
	static_assert(offsetof(hknpVehicleData, m_gravity) == 0x10);
	static_assert(offsetof(hknpVehicleData, m_numWheels) == 0x20);
	static_assert(offsetof(hknpVehicleData, m_chassisOrientation) == 0x30);
	static_assert(offsetof(hknpVehicleData, m_torqueRollFactor) == 0x60);
	static_assert(offsetof(hknpVehicleData, m_torquePitchFactor) == 0x64);
	static_assert(offsetof(hknpVehicleData, m_torqueYawFactor) == 0x68);
	static_assert(offsetof(hknpVehicleData, m_extraTorqueFactor) == 0x6C);
	static_assert(offsetof(hknpVehicleData, m_maxVelocityForPositionalFriction) == 0x70);
	static_assert(offsetof(hknpVehicleData, m_chassisUnitInertiaYaw) == 0x74);
	static_assert(offsetof(hknpVehicleData, m_chassisUnitInertiaRoll) == 0x78);
	static_assert(offsetof(hknpVehicleData, m_chassisUnitInertiaPitch) == 0x7C);
	static_assert(offsetof(hknpVehicleData, m_frictionEqualizer) == 0x80);
	static_assert(offsetof(hknpVehicleData, m_normalClippingAngleCos) == 0x84);
	static_assert(offsetof(hknpVehicleData, m_maxFrictionSolverMassRatio) == 0x88);
	static_assert(offsetof(hknpVehicleData, m_wheelParams) == 0x90);
	static_assert(offsetof(hknpVehicleData, m_numWheelsPerAxle) == 0xA0);
	static_assert(offsetof(hknpVehicleData, m_frictionDescription) == 0xB0);
	static_assert(offsetof(hknpVehicleData, m_chassisFrictionInertiaInvDiag) == 0x190);
	static_assert(offsetof(hknpVehicleData, m_alreadyInitialised) == 0x1A0);
}
