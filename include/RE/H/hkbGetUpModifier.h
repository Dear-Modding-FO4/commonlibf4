#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbGetUpModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbGetUpModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbGetUpModifier };

		// members
		std::uint8_t unk58[0x8];          // 0x58
		hkVector4f m_groundNormal;        // 0x60
		float m_duration;                 // 0x70
		float m_alignWithGroundDuration;  // 0x74
		std::int16_t m_rootBoneIndex;     // 0x78
		std::int16_t m_otherBoneIndex;    // 0x7A
		std::int16_t m_anotherBoneIndex;  // 0x7C
		std::uint8_t pad7E[0x2];          // 0x7E
		float m_timeSinceBegin;           // 0x80
		float m_timeStep;                 // 0x84
		bool m_initNextModify;            // 0x88
	};
	static_assert(sizeof(hkbGetUpModifier) == 0x90);
	static_assert(offsetof(hkbGetUpModifier, m_groundNormal) == 0x60);
	static_assert(offsetof(hkbGetUpModifier, m_duration) == 0x70);
	static_assert(offsetof(hkbGetUpModifier, m_alignWithGroundDuration) == 0x74);
	static_assert(offsetof(hkbGetUpModifier, m_rootBoneIndex) == 0x78);
	static_assert(offsetof(hkbGetUpModifier, m_otherBoneIndex) == 0x7A);
	static_assert(offsetof(hkbGetUpModifier, m_anotherBoneIndex) == 0x7C);
	static_assert(offsetof(hkbGetUpModifier, m_timeSinceBegin) == 0x80);
	static_assert(offsetof(hkbGetUpModifier, m_timeStep) == 0x84);
	static_assert(offsetof(hkbGetUpModifier, m_initNextModify) == 0x88);
}
