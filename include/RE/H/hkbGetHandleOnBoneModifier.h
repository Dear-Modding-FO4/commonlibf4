#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbHandle;

	class __declspec(novtable) hkbGetHandleOnBoneModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbGetHandleOnBoneModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbGetHandleOnBoneModifier };

		// members
		hkbHandle* m_handleOut;             // 0x58
		hkStringPtr m_localFrameName;       // 0x60
		std::int16_t m_ragdollBoneIndex;    // 0x68
		std::int16_t m_animationBoneIndex;  // 0x6A
	};
	static_assert(sizeof(hkbGetHandleOnBoneModifier) == 0x70);
	static_assert(offsetof(hkbGetHandleOnBoneModifier, m_handleOut) == 0x58);
	static_assert(offsetof(hkbGetHandleOnBoneModifier, m_localFrameName) == 0x60);
	static_assert(offsetof(hkbGetHandleOnBoneModifier, m_ragdollBoneIndex) == 0x68);
	static_assert(offsetof(hkbGetHandleOnBoneModifier, m_animationBoneIndex) == 0x6A);
}
