#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/B/BINKTEXTURESET.h"

namespace RE
{
	namespace BSAudioUtil
	{
		struct MasterVolumeChangedEvent;
	}

	struct BINK;

	class Movie :
		public BSTEventSink<BSAudioUtil::MasterVolumeChangedEvent>  // 00
	{
	public:
		enum class STATE : std::uint32_t
		{
			kNone = 0,
			kForeground = 1,
			kBackground = 2
		};

		struct PlaybackSettings
		{
		public:
			enum class FLAGS : std::uint8_t
			{
				kLoop = 1u << 1,           // 02
				kPreload = 1u << 2,        // 04
				kAlternateScale = 1u << 3, // 08
				kPauseAudio = 1u << 4,     // 10
				kPauseMusic = 1u << 5,     // 20
				kPreloadAlways = 1u << 6   // 40
			};

			// members
			std::uint32_t                  language;  // 00
			const char*                    name;      // 08
			const char*                    suffix;    // 10
			std::uint8_t                   flags;     // 18
		};
		static_assert(sizeof(PlaybackSettings) == 0x20);

		virtual ~Movie();  // 00

		bool LoadBink(PlaybackSettings& a_settings)
		{
			using func_t = decltype(&Movie::LoadBink);
			static REL::Relocation<func_t> func{ ID::Movie::LoadBink };
			return func(this, a_settings);
		}

		bool OpenBink(PlaybackSettings& a_settings)
		{
			using func_t = decltype(&Movie::OpenBink);
			static REL::Relocation<func_t> func{ ID::Movie::OpenBink };
			return func(this, a_settings);
		}

		bool Update(bool a_loop, bool a_alternateScale)
		{
			using func_t = decltype(&Movie::Update);
			static REL::Relocation<func_t> func{ ID::Movie::Update };
			return func(this, a_loop, a_alternateScale);
		}

		// members
		BINK*           bink;           // 08
		BINKTEXTURESET* textureSet;     // 10
		std::uint32_t   framesPlayed;   // 18
		std::uint32_t   framesSkipped;  // 1C
		std::uint32_t   soundTrack;     // 20
		float           scale;          // 24
		float           offsetX;        // 28
		float           offsetY;        // 2C
		STATE           state;          // 30
		bool            loading;        // 34
		bool            loop;           // 35
	};
	static_assert(offsetof(Movie, bink) == 0x08);
	static_assert(offsetof(Movie, textureSet) == 0x10);
	static_assert(offsetof(Movie, state) == 0x30);
	static_assert(offsetof(Movie, loop) == 0x35);
}
