#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbTransitionEffect.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class __declspec(novtable) hkbBlendingTransitionEffect :
		public hkbTransitionEffect  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBlendingTransitionEffect };
		inline static constexpr auto VTABLE{ VTABLE::hkbBlendingTransitionEffect };

		// add
		virtual void isSyncable();  // 0x118 [23] (hkbBehaviorGraph&)
		virtual void Unk_24();  // 0x120 [24]
		virtual void Unk_25();  // 0x128 [25]
		virtual void getFromGeneratorSyncInfo();  // 0x130 [26] (hkbBehaviorGraph&)
		virtual void Unk_27();  // 0x138 [27]

		enum class FlagBits : std::uint32_t
		{
			kFlagNone = 0,
			kFlagIgnoreFromWorldFromModel = 1,
			kFlagSync = 2,
			kFlagIgnoreToWorldFromModel = 4,
			kFlagIgnoreToWorldFromModelRotation = 8
		};

		enum class EndMode : std::uint8_t
		{
			kEndModeNone = 0,
			kEndModeTransitionUntilEndOfFromGenerator = 1,
			kEndModeCapDurationAtEndOfFromGenerator = 2
		};

		// members
		float m_duration;                                           // 0xA8
		float m_toGeneratorStartTimeFraction;                       // 0xAC
		std::uint16_t m_flags;                                      // 0xB0
		hkEnum<EndMode, std::int8_t> m_endMode;                                      // 0xB2
		std::int8_t m_blendCurve;                                   // 0xB3
		std::int16_t m_alignmentBone;                               // 0xB4
		std::uint8_t unkB6[0xA];                                    // 0xB6
		hkVector4f m_fromPos;                                       // 0xC0
		hkQuaternionf m_fromRot;                                    // 0xD0
		hkVector4f m_toPos;                                         // 0xE0
		hkQuaternionf m_toRot;                                      // 0xF0
		hkVector4f m_lastPos;                                       // 0x100
		hkQuaternionf m_lastRot;                                    // 0x110
		std::uint8_t m_characterPoseAtBeginningOfTransition[0x10];  // 0x120
		float m_timeRemaining;                                      // 0x130
		float m_timeInTransition;                                   // 0x134
		std::int8_t m_toGeneratorSelfTranstitionMode;               // 0x138
		bool m_initializeCharacterPose;                             // 0x139
		bool m_alignThisFrame;                                      // 0x13A
		bool m_alignmentFinished;                                   // 0x13B
	};
	static_assert(sizeof(hkbBlendingTransitionEffect) == 0x140);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_duration) == 0xA8);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_toGeneratorStartTimeFraction) == 0xAC);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_flags) == 0xB0);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_endMode) == 0xB2);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_blendCurve) == 0xB3);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_alignmentBone) == 0xB4);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_fromPos) == 0xC0);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_fromRot) == 0xD0);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_toPos) == 0xE0);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_toRot) == 0xF0);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_lastPos) == 0x100);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_lastRot) == 0x110);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_characterPoseAtBeginningOfTransition) == 0x120);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_timeRemaining) == 0x130);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_timeInTransition) == 0x134);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_toGeneratorSelfTranstitionMode) == 0x138);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_initializeCharacterPose) == 0x139);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_alignThisFrame) == 0x13A);
	static_assert(offsetof(hkbBlendingTransitionEffect, m_alignmentFinished) == 0x13B);
}
