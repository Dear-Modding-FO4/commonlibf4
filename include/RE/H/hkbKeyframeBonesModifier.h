#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbBoneIndexArray;
	class hkbKeyframeBonesModifierKeyframeInfo;

	class __declspec(novtable) hkbKeyframeBonesModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbKeyframeBonesModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbKeyframeBonesModifier };

		// members
		hkArray<hkbKeyframeBonesModifierKeyframeInfo> m_keyframeInfo;  // 0x58
		hkbBoneIndexArray* m_keyframedBonesList;                       // 0x68
	};
	static_assert(sizeof(hkbKeyframeBonesModifier) == 0x70);
	static_assert(offsetof(hkbKeyframeBonesModifier, m_keyframeInfo) == 0x58);
	static_assert(offsetof(hkbKeyframeBonesModifier, m_keyframedBonesList) == 0x68);
}
