#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpUnaryAction.h"
#include "RE/H/hkpVehicleFrictionStatus.h"

namespace RE
{
	class hknpTyremarksInfo;
	class hknpVehicleAerodynamics;
	class hknpVehicleBrake;
	class hknpVehicleData;
	class hknpVehicleDriverInput;
	class hknpVehicleDriverInputStatus;
	class hknpVehicleEngine;
	class hknpVehicleInstanceWheelInfo;
	class hknpVehicleSteering;
	class hknpVehicleSuspension;
	class hknpVehicleTransmission;
	class hknpVehicleVelocityDamper;
	class hknpVehicleWheelCollide;

	class __declspec(novtable) hknpVehicleInstance :
		public hknpUnaryAction  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpVehicleInstance };
		inline static constexpr auto VTABLE{ VTABLE::hknpVehicleInstance };

		// members
		std::uint8_t unk18[0x8];                             // 0x18
		void* m_world;                                       // 0x20
		hknpVehicleData* m_data;                             // 0x28
		hknpVehicleDriverInput* m_driverInput;               // 0x30
		hknpVehicleSteering* m_steering;                     // 0x38
		hknpVehicleEngine* m_engine;                         // 0x40
		hknpVehicleTransmission* m_transmission;             // 0x48
		hknpVehicleBrake* m_brake;                           // 0x50
		hknpVehicleSuspension* m_suspension;                 // 0x58
		hknpVehicleAerodynamics* m_aerodynamics;             // 0x60
		hknpVehicleWheelCollide* m_wheelCollide;             // 0x68
		hknpTyremarksInfo* m_tyreMarks;                      // 0x70
		hknpVehicleVelocityDamper* m_velocityDamper;         // 0x78
		hkArray<hknpVehicleInstanceWheelInfo> m_wheelsInfo;  // 0x80
		hkpVehicleFrictionStatus m_frictionStatus;           // 0x90
		hknpVehicleDriverInputStatus* m_deviceStatus;        // 0xD8
		hkArray<bool> m_isFixed;                             // 0xE0
		float m_wheelsTimeSinceMaxPedalInput;                // 0xF0
		bool m_tryingToReverse;                              // 0xF4
		std::uint8_t padF5[0x3];                             // 0xF5
		float m_torque;                                      // 0xF8
		float m_rpm;                                         // 0xFC
		float m_mainSteeringAngle;                           // 0x100
		float m_mainSteeringAngleAssumingNoReduction;        // 0x104
		hkArray<float> m_wheelsSteeringAngle;                // 0x108
		bool m_isReversing;                                  // 0x118
		std::int8_t m_currentGear;                           // 0x119
		bool m_delayed;                                      // 0x11A
		std::uint8_t pad11B[0x1];                            // 0x11B
		float m_clutchDelayCountdown;                        // 0x11C
	};
	static_assert(sizeof(hknpVehicleInstance) == 0x120);
	static_assert(offsetof(hknpVehicleInstance, m_world) == 0x20);
	static_assert(offsetof(hknpVehicleInstance, m_data) == 0x28);
	static_assert(offsetof(hknpVehicleInstance, m_driverInput) == 0x30);
	static_assert(offsetof(hknpVehicleInstance, m_steering) == 0x38);
	static_assert(offsetof(hknpVehicleInstance, m_engine) == 0x40);
	static_assert(offsetof(hknpVehicleInstance, m_transmission) == 0x48);
	static_assert(offsetof(hknpVehicleInstance, m_brake) == 0x50);
	static_assert(offsetof(hknpVehicleInstance, m_suspension) == 0x58);
	static_assert(offsetof(hknpVehicleInstance, m_aerodynamics) == 0x60);
	static_assert(offsetof(hknpVehicleInstance, m_wheelCollide) == 0x68);
	static_assert(offsetof(hknpVehicleInstance, m_tyreMarks) == 0x70);
	static_assert(offsetof(hknpVehicleInstance, m_velocityDamper) == 0x78);
	static_assert(offsetof(hknpVehicleInstance, m_wheelsInfo) == 0x80);
	static_assert(offsetof(hknpVehicleInstance, m_frictionStatus) == 0x90);
	static_assert(offsetof(hknpVehicleInstance, m_deviceStatus) == 0xD8);
	static_assert(offsetof(hknpVehicleInstance, m_isFixed) == 0xE0);
	static_assert(offsetof(hknpVehicleInstance, m_wheelsTimeSinceMaxPedalInput) == 0xF0);
	static_assert(offsetof(hknpVehicleInstance, m_tryingToReverse) == 0xF4);
	static_assert(offsetof(hknpVehicleInstance, m_torque) == 0xF8);
	static_assert(offsetof(hknpVehicleInstance, m_rpm) == 0xFC);
	static_assert(offsetof(hknpVehicleInstance, m_mainSteeringAngle) == 0x100);
	static_assert(offsetof(hknpVehicleInstance, m_mainSteeringAngleAssumingNoReduction) == 0x104);
	static_assert(offsetof(hknpVehicleInstance, m_wheelsSteeringAngle) == 0x108);
	static_assert(offsetof(hknpVehicleInstance, m_isReversing) == 0x118);
	static_assert(offsetof(hknpVehicleInstance, m_currentGear) == 0x119);
	static_assert(offsetof(hknpVehicleInstance, m_delayed) == 0x11A);
	static_assert(offsetof(hknpVehicleInstance, m_clutchDelayCountdown) == 0x11C);
}
