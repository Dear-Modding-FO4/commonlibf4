#pragma once

namespace RE
{
	class hkpVehicleFrictionStatusAxisStatus
	{
	public:

		// members
		float m_forward_slip_velocity;    // 0x00
		float m_side_slip_velocity;       // 0x04
		float m_skid_energy_density;      // 0x08
		float m_side_force;               // 0x0C
		float m_delayed_forward_impulse;  // 0x10
		float m_sideRhs;                  // 0x14
		float m_forwardRhs;               // 0x18
		float m_relativeSideForce;        // 0x1C
		float m_relativeForwardForce;     // 0x20
	};
	static_assert(sizeof(hkpVehicleFrictionStatusAxisStatus) == 0x24);
	static_assert(offsetof(hkpVehicleFrictionStatusAxisStatus, m_forward_slip_velocity) == 0x0);
	static_assert(offsetof(hkpVehicleFrictionStatusAxisStatus, m_side_slip_velocity) == 0x4);
	static_assert(offsetof(hkpVehicleFrictionStatusAxisStatus, m_skid_energy_density) == 0x8);
	static_assert(offsetof(hkpVehicleFrictionStatusAxisStatus, m_side_force) == 0xC);
	static_assert(offsetof(hkpVehicleFrictionStatusAxisStatus, m_delayed_forward_impulse) == 0x10);
	static_assert(offsetof(hkpVehicleFrictionStatusAxisStatus, m_sideRhs) == 0x14);
	static_assert(offsetof(hkpVehicleFrictionStatusAxisStatus, m_forwardRhs) == 0x18);
	static_assert(offsetof(hkpVehicleFrictionStatusAxisStatus, m_relativeSideForce) == 0x1C);
	static_assert(offsetof(hkpVehicleFrictionStatusAxisStatus, m_relativeForwardForce) == 0x20);
}
