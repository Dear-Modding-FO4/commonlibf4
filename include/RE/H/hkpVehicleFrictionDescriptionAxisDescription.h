#pragma once

namespace RE
{
	class hkpVehicleFrictionDescriptionAxisDescription
	{
	public:

		// members
		float m_frictionCircleYtab[16];   // 0x00
		float m_xStep;                    // 0x40
		float m_xStart;                   // 0x44
		float m_wheelSurfaceInertia;      // 0x48
		float m_wheelSurfaceInertiaInv;   // 0x4C
		float m_wheelChassisMassRatio;    // 0x50
		float m_wheelRadius;              // 0x54
		float m_wheelRadiusInv;           // 0x58
		float m_wheelDownForceFactor;     // 0x5C
		float m_wheelDownForceSumFactor;  // 0x60
	};
	static_assert(sizeof(hkpVehicleFrictionDescriptionAxisDescription) == 0x64);
	static_assert(offsetof(hkpVehicleFrictionDescriptionAxisDescription, m_frictionCircleYtab) == 0x0);
	static_assert(offsetof(hkpVehicleFrictionDescriptionAxisDescription, m_xStep) == 0x40);
	static_assert(offsetof(hkpVehicleFrictionDescriptionAxisDescription, m_xStart) == 0x44);
	static_assert(offsetof(hkpVehicleFrictionDescriptionAxisDescription, m_wheelSurfaceInertia) == 0x48);
	static_assert(offsetof(hkpVehicleFrictionDescriptionAxisDescription, m_wheelSurfaceInertiaInv) == 0x4C);
	static_assert(offsetof(hkpVehicleFrictionDescriptionAxisDescription, m_wheelChassisMassRatio) == 0x50);
	static_assert(offsetof(hkpVehicleFrictionDescriptionAxisDescription, m_wheelRadius) == 0x54);
	static_assert(offsetof(hkpVehicleFrictionDescriptionAxisDescription, m_wheelRadiusInv) == 0x58);
	static_assert(offsetof(hkpVehicleFrictionDescriptionAxisDescription, m_wheelDownForceFactor) == 0x5C);
	static_assert(offsetof(hkpVehicleFrictionDescriptionAxisDescription, m_wheelDownForceSumFactor) == 0x60);
}
