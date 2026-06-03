#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/B/BSSpinLock.h"
#include "RE/N/NiExtraData.h"
#include "RE/S/SEX.h"

namespace RE
{
	class LipSynchAnim;

	class BSFaceGenAnimationData : public NiExtraData
	{
	public:
		enum BlinkState : std::int32_t
		{
			kPreBlink,
			kBlinkDown,
			kBlinkUp,
			kNoBlink_LookingDown,
			kBlinkDead,
			kPreDead,
			kTotal
		};

		enum LipSyncState : std::int32_t
		{
			kNone,
			kPlaying,
			kEnding,
			kNoAnim
		};

		// members
		float         finalExpression[54];					// 018
		float         speechExpression[54];					// 0F0
		float         emotionExpression[54];				// 1C8
		float         speechTimer;							// 2A0
		std::uint32_t faceEmotionInstanceHandle;			// 2A4
		BlinkState    blinkState;							// 2A8
		float         blinkTimer;							// 2AC
		float         lidsFollowEyes;						// 2B0
		BSSpinLock    lipSyncLock;							// 2B4
		LipSynchAnim* lipSyncAnimHandle;                    // 2C0
		BSSoundHandle soundHandle;							// 2C8
		BSFixedString faceAnimArchetype;					// 2D0
		bool          dirty;								// 2D8
		bool          forceUpdate;							// 2D9
		bool          skipUpdate;							// 2DA
		bool          actorIsDead;							// 2DB
		SEX           gender;								// 2DC
		LipSyncState  lipSyncState;							// 2E0
	};
	static_assert(sizeof(BSFaceGenAnimationData) == 0x2E8);
}
