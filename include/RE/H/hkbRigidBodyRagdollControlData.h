#pragma once

#include "RE/H/hkbKeyFrameControlData.h"

namespace RE
{
	class hkbRigidBodyRagdollControlData
	{
	public:

		// members
		hkbKeyFrameControlData m_keyFrameControlData;  // 0x00
		float m_durationToBlend;                       // 0x30
		std::uint8_t unk34[0xC];                       // 0x34
	};
	static_assert(sizeof(hkbRigidBodyRagdollControlData) == 0x40);
	static_assert(offsetof(hkbRigidBodyRagdollControlData, m_keyFrameControlData) == 0x0);
	static_assert(offsetof(hkbRigidBodyRagdollControlData, m_durationToBlend) == 0x30);
}
