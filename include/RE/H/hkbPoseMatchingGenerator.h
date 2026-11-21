#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkbBlenderGenerator.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class __declspec(novtable) hkbPoseMatchingGenerator :
		public hkbBlenderGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbPoseMatchingGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbPoseMatchingGenerator };

		enum class Mode : std::uint8_t
		{
			kModeMatch = 0,
			kModePlay = 1
		};

		// members
		hkQuaternionf m_worldFromModelRotation;  // 0xE0
		float m_blendSpeed;                      // 0xF0
		float m_minSpeedToSwitch;                // 0xF4
		float m_minSwitchTimeNoError;            // 0xF8
		float m_minSwitchTimeFullError;          // 0xFC
		std::int32_t m_startPlayingEventId;      // 0x100
		std::int32_t m_startMatchingEventId;     // 0x104
		std::int16_t m_rootBoneIndex;            // 0x108
		std::int16_t m_otherBoneIndex;           // 0x10A
		std::int16_t m_anotherBoneIndex;         // 0x10C
		std::int16_t m_pelvisIndex;              // 0x10E
		hkEnum<Mode, std::int8_t> m_mode;                      // 0x110
		std::uint8_t pad111[0x3];                // 0x111
		std::int32_t m_currentMatch;             // 0x114
		std::int32_t m_bestMatch;                // 0x118
		float m_timeSinceBetterMatch;            // 0x11C
		float m_error;                           // 0x120
		bool m_resetCurrentMatchLocalTime;       // 0x124
		std::uint8_t pad125[0x3];                // 0x125
		void* m_poseMatchingUtility;             // 0x128
	};
	static_assert(sizeof(hkbPoseMatchingGenerator) == 0x130);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_worldFromModelRotation) == 0xE0);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_blendSpeed) == 0xF0);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_minSpeedToSwitch) == 0xF4);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_minSwitchTimeNoError) == 0xF8);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_minSwitchTimeFullError) == 0xFC);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_startPlayingEventId) == 0x100);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_startMatchingEventId) == 0x104);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_rootBoneIndex) == 0x108);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_otherBoneIndex) == 0x10A);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_anotherBoneIndex) == 0x10C);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_pelvisIndex) == 0x10E);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_mode) == 0x110);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_currentMatch) == 0x114);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_bestMatch) == 0x118);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_timeSinceBetterMatch) == 0x11C);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_error) == 0x120);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_resetCurrentMatchLocalTime) == 0x124);
	static_assert(offsetof(hkbPoseMatchingGenerator, m_poseMatchingUtility) == 0x128);
}
