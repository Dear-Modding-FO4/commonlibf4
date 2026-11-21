#pragma once

#include "RE/H/hkbEventProperty.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbDetectCloseToGroundModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbDetectCloseToGroundModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbDetectCloseToGroundModifier };

		// members
		hkbEventProperty m_closeToGroundEvent;  // 0x58
		float m_closeToGroundHeight;            // 0x68
		float m_raycastDistanceDown;            // 0x6C
		std::uint32_t m_collisionFilterInfo;    // 0x70
		std::int16_t m_boneIndex;               // 0x74
		std::int16_t m_animBoneIndex;           // 0x76
		bool m_isCloseToGround;                 // 0x78
	};
	static_assert(sizeof(hkbDetectCloseToGroundModifier) == 0x80);
	static_assert(offsetof(hkbDetectCloseToGroundModifier, m_closeToGroundEvent) == 0x58);
	static_assert(offsetof(hkbDetectCloseToGroundModifier, m_closeToGroundHeight) == 0x68);
	static_assert(offsetof(hkbDetectCloseToGroundModifier, m_raycastDistanceDown) == 0x6C);
	static_assert(offsetof(hkbDetectCloseToGroundModifier, m_collisionFilterInfo) == 0x70);
	static_assert(offsetof(hkbDetectCloseToGroundModifier, m_boneIndex) == 0x74);
	static_assert(offsetof(hkbDetectCloseToGroundModifier, m_animBoneIndex) == 0x76);
	static_assert(offsetof(hkbDetectCloseToGroundModifier, m_isCloseToGround) == 0x78);
}
