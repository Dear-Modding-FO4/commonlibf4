#pragma once

namespace RE
{
	class hkbPoweredRagdollControlData
	{
	public:

		// members
		float m_maxForce;                      // 0x00
		float m_tau;                           // 0x04
		float m_damping;                       // 0x08
		float m_proportionalRecoveryVelocity;  // 0x0C
		float m_constantRecoveryVelocity;      // 0x10
		std::uint8_t unk14[0xC];               // 0x14
	};
	static_assert(sizeof(hkbPoweredRagdollControlData) == 0x20);
	static_assert(offsetof(hkbPoweredRagdollControlData, m_maxForce) == 0x0);
	static_assert(offsetof(hkbPoweredRagdollControlData, m_tau) == 0x4);
	static_assert(offsetof(hkbPoweredRagdollControlData, m_damping) == 0x8);
	static_assert(offsetof(hkbPoweredRagdollControlData, m_proportionalRecoveryVelocity) == 0xC);
	static_assert(offsetof(hkbPoweredRagdollControlData, m_constantRecoveryVelocity) == 0x10);
}
