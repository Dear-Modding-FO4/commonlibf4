#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkbKeyframeBonesModifierKeyframeInfo
	{
	public:

		// members
		hkVector4f m_keyframedPosition;     // 0x00
		hkQuaternionf m_keyframedRotation;  // 0x10
		std::int16_t m_boneIndex;           // 0x20
		bool m_isValid;                     // 0x22
	};
	static_assert(sizeof(hkbKeyframeBonesModifierKeyframeInfo) == 0x30);
	static_assert(offsetof(hkbKeyframeBonesModifierKeyframeInfo, m_keyframedPosition) == 0x0);
	static_assert(offsetof(hkbKeyframeBonesModifierKeyframeInfo, m_keyframedRotation) == 0x10);
	static_assert(offsetof(hkbKeyframeBonesModifierKeyframeInfo, m_boneIndex) == 0x20);
	static_assert(offsetof(hkbKeyframeBonesModifierKeyframeInfo, m_isValid) == 0x22);
}
