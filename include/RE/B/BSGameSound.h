#pragma once

#include "RE/B/BSResource_ID.h"
#include "RE/B/BSTArray.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BSIAudioEffectChain;
	class BSISoundCategory;
	class BSISoundOutputModel;

	class __declspec(novtable) BSGameSound
	{
	public:
		enum class FLAGS : std::uint32_t  // 98
		{
			kFrequencyDirty = 1u << 15,
			kStartedPlayback = 1u << 8
		};

		virtual void          OutputModelChangedImpl();                                     // 00
		virtual ~BSGameSound();                                                             // 01
		virtual bool          Unk_02() const = 0;                                           // 02
		virtual std::uint64_t GetCurrentPlaybackPosition() = 0;                             // 03
		virtual bool          LessThanByPriority(const BSGameSound& a_other) const;         // 04
		virtual void          SyncOpen() = 0;                                               // 05
		virtual void          StartAsyncOpen() = 0;                                         // 06
		virtual void          TestAsyncOpenReady() = 0;                                     // 07
		virtual void          FinishAsyncOpen() = 0;                                        // 08
		virtual void          HandleExternalOpen() = 0;                                     // 09
		virtual void          Prepare() = 0;                                                // 0A
		virtual void          Copy(BSGameSound* a_to, bool a_unk);                          // 0B
		virtual void          Unk_0C() = 0;                                                 // 0C
		virtual bool          Update();                                                     // 0D
		virtual void          DoApplyFrequency();                                           // 0E
		virtual void          Seek(std::uint32_t a_ms) = 0;                                 // 0F
		virtual void          WaitForSyncedSeek() = 0;                                      // 10
		virtual void          Unk_11(BSGameSound* a_other) = 0;                             // 11
		virtual void          PlayImpl() = 0;                                               // 12
		virtual void          PauseImpl() = 0;                                              // 13
		virtual void          StopImpl(bool a_force) = 0;                                   // 14
		virtual void          StartSyncedPlaybackImpl(BSGameSound& a_leader) = 0;           // 15
		virtual void          StopSyncedPlaybackImpl(BSGameSound& a_leader) = 0;            // 16
		virtual void          SetVolumeImpl() = 0;                                          // 17
		virtual void          RecalcAttenuationCurveImpl() = 0;                             // 18
		virtual void          Unk_19() = 0;                                                 // 19
		virtual void          DoApplyReverbIndex() = 0;                                     // 1A
		virtual void          SetEmitterPositionImpl(const NiPoint3& a_position) = 0;       // 1B
		virtual void          Unk_1C(NiPoint3& a_out) const = 0;                            // 1C

		float UpdateFrequencyModifier()
		{
			using func_t = decltype(&BSGameSound::UpdateFrequencyModifier);
			static REL::Relocation<func_t> func{ ID::BSGameSound::UpdateFrequencyModifier };
			return func(this);
		}

		void CalcInitialFrequency()
		{
			using func_t = decltype(&BSGameSound::CalcInitialFrequency);
			static REL::Relocation<func_t> func{ ID::BSGameSound::CalcInitialFrequency };
			return func(this);
		}

		// members
		BSTSmallArray<std::uint64_t, 3> resolutionEntries;      // 08
		NiPoint3                  lineEndPosition;				// 30
		NiPoint3                  emitterPosition;				// 3C
		BSResource::ID            resourceID;					// 48
		std::byte                 messageList[0x10];			// 58
		void*                     source;						// 68
		BSISoundCategory*         category;						// 70
		BSISoundOutputModel*      outputModel;					// 78
		const BSIAudioEffectChain* effectChain;					// 80
		std::uint64_t             emitterUpdateTick;			// 88
		std::uint32_t             soundID;						// 90
		std::uint32_t             outputFlags;					// 94
		REX::TEnumSet<FLAGS, std::uint32_t> flags;				// 98
		std::uint32_t             cacheKey1;					// 9C
		std::uint32_t             cacheKey2;					// A0
		float                     volume;						// A4
		float                     effectiveDistance;			// A8
		float                     initialFrequency;				// AC
		float                     frequencyModifier;			// B0
		std::uint16_t             descriptorAttenuation;		// B4
		std::uint16_t             fadeAttenuation;				// B6
		std::uint16_t             attenuation2D;				// B8
		std::uint16_t             unkBA;						// BA
		std::uint8_t              frequencyPct;					// BC
		std::uint8_t              frequencyVariancePct;			// BD
		std::uint8_t              priority;						// BE
		std::uint8_t              unkBF;						// BF
		std::uint8_t              reverbIndex;					// C0
	};
	static_assert(sizeof(BSGameSound) == 0xC8);
}
