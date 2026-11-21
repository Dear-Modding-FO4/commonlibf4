#pragma once

#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbGenerator.h"

namespace RE
{
	class hkbClipTriggerArray;

	class __declspec(novtable) hkbClipGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbClipGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbClipGenerator };

		enum class PlaybackMode : std::uint32_t
		{
			kModeSinglePlay = 0,
			kModeLooping = 1,
			kModeUserControlled = 2,
			kModePingPong = 3,
			kModeCount = 4
		};

		enum class ClipFlags : std::uint32_t
		{
			kFlagContinueMotionAtEnd = 1,
			kFlagSyncHalfCycleInPingPongMode = 2,
			kFlagMirror = 4,
			kFlagForceDensePose = 8,
			kFlagDontConvertAnnotationsToTriggers = 16,
			kFlagIgnoreMotion = 32
		};

		// members
		hkStringPtr m_animationBundleName;           // 0x88
		hkStringPtr m_animationName;                 // 0x90
		hkbClipTriggerArray* m_triggers;             // 0x98
		std::uint32_t m_userPartitionMask;           // 0xA0
		float m_cropStartAmountLocalTime;            // 0xA4
		float m_cropEndAmountLocalTime;              // 0xA8
		float m_startTime;                           // 0xAC
		float m_playbackSpeed;                       // 0xB0
		float m_enforcedDuration;                    // 0xB4
		float m_userControlledTimeFraction;          // 0xB8
		std::int16_t m_animationBindingIndex;        // 0xBC
		std::int8_t m_mode;                          // 0xBE
		std::int8_t m_flags;                         // 0xBF
		std::uint8_t m_animDatas[0x10];              // 0xC0
		void* m_animationControl;                    // 0xD0
		void* m_originalTriggers;                    // 0xD8
		void* m_mapperData;                          // 0xE0
		void* m_binding;                             // 0xE8
		std::int32_t m_numAnimationTracks;           // 0xF0
		std::uint8_t unkF4[0xC];                     // 0xF4
		hkQsTransformf m_extractedMotion;            // 0x100
		std::uint8_t m_echos[0x10];                  // 0x130
		float m_localTime;                           // 0x140
		float m_time;                                // 0x144
		float m_previousUserControlledTimeFraction;  // 0x148
		std::int32_t m_bufferSize;                   // 0x14C
		bool m_atEnd;                                // 0x150
		bool m_ignoreStartTime;                      // 0x151
		bool m_pingPongBackward;                     // 0x152
	};
	static_assert(sizeof(hkbClipGenerator) == 0x160);
	static_assert(offsetof(hkbClipGenerator, m_animationBundleName) == 0x88);
	static_assert(offsetof(hkbClipGenerator, m_animationName) == 0x90);
	static_assert(offsetof(hkbClipGenerator, m_triggers) == 0x98);
	static_assert(offsetof(hkbClipGenerator, m_userPartitionMask) == 0xA0);
	static_assert(offsetof(hkbClipGenerator, m_cropStartAmountLocalTime) == 0xA4);
	static_assert(offsetof(hkbClipGenerator, m_cropEndAmountLocalTime) == 0xA8);
	static_assert(offsetof(hkbClipGenerator, m_startTime) == 0xAC);
	static_assert(offsetof(hkbClipGenerator, m_playbackSpeed) == 0xB0);
	static_assert(offsetof(hkbClipGenerator, m_enforcedDuration) == 0xB4);
	static_assert(offsetof(hkbClipGenerator, m_userControlledTimeFraction) == 0xB8);
	static_assert(offsetof(hkbClipGenerator, m_animationBindingIndex) == 0xBC);
	static_assert(offsetof(hkbClipGenerator, m_mode) == 0xBE);
	static_assert(offsetof(hkbClipGenerator, m_flags) == 0xBF);
	static_assert(offsetof(hkbClipGenerator, m_animDatas) == 0xC0);
	static_assert(offsetof(hkbClipGenerator, m_animationControl) == 0xD0);
	static_assert(offsetof(hkbClipGenerator, m_originalTriggers) == 0xD8);
	static_assert(offsetof(hkbClipGenerator, m_mapperData) == 0xE0);
	static_assert(offsetof(hkbClipGenerator, m_binding) == 0xE8);
	static_assert(offsetof(hkbClipGenerator, m_numAnimationTracks) == 0xF0);
	static_assert(offsetof(hkbClipGenerator, m_extractedMotion) == 0x100);
	static_assert(offsetof(hkbClipGenerator, m_echos) == 0x130);
	static_assert(offsetof(hkbClipGenerator, m_localTime) == 0x140);
	static_assert(offsetof(hkbClipGenerator, m_time) == 0x144);
	static_assert(offsetof(hkbClipGenerator, m_previousUserControlledTimeFraction) == 0x148);
	static_assert(offsetof(hkbClipGenerator, m_bufferSize) == 0x14C);
	static_assert(offsetof(hkbClipGenerator, m_atEnd) == 0x150);
	static_assert(offsetof(hkbClipGenerator, m_ignoreStartTime) == 0x151);
	static_assert(offsetof(hkbClipGenerator, m_pingPongBackward) == 0x152);
}
