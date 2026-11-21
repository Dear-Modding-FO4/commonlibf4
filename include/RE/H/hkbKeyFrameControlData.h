#pragma once

namespace RE
{
	class hkbKeyFrameControlData
	{
	public:

		// members
		float m_hierarchyGain;               // 0x00
		float m_velocityDamping;             // 0x04
		float m_accelerationGain;            // 0x08
		float m_velocityGain;                // 0x0C
		float m_positionGain;                // 0x10
		float m_positionMaxLinearVelocity;   // 0x14
		float m_positionMaxAngularVelocity;  // 0x18
		float m_snapGain;                    // 0x1C
		float m_snapMaxLinearVelocity;       // 0x20
		float m_snapMaxAngularVelocity;      // 0x24
		float m_snapMaxLinearDistance;       // 0x28
		float m_snapMaxAngularDistance;      // 0x2C
	};
	static_assert(sizeof(hkbKeyFrameControlData) == 0x30);
	static_assert(offsetof(hkbKeyFrameControlData, m_hierarchyGain) == 0x0);
	static_assert(offsetof(hkbKeyFrameControlData, m_velocityDamping) == 0x4);
	static_assert(offsetof(hkbKeyFrameControlData, m_accelerationGain) == 0x8);
	static_assert(offsetof(hkbKeyFrameControlData, m_velocityGain) == 0xC);
	static_assert(offsetof(hkbKeyFrameControlData, m_positionGain) == 0x10);
	static_assert(offsetof(hkbKeyFrameControlData, m_positionMaxLinearVelocity) == 0x14);
	static_assert(offsetof(hkbKeyFrameControlData, m_positionMaxAngularVelocity) == 0x18);
	static_assert(offsetof(hkbKeyFrameControlData, m_snapGain) == 0x1C);
	static_assert(offsetof(hkbKeyFrameControlData, m_snapMaxLinearVelocity) == 0x20);
	static_assert(offsetof(hkbKeyFrameControlData, m_snapMaxAngularVelocity) == 0x24);
	static_assert(offsetof(hkbKeyFrameControlData, m_snapMaxLinearDistance) == 0x28);
	static_assert(offsetof(hkbKeyFrameControlData, m_snapMaxAngularDistance) == 0x2C);
}
