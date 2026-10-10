#pragma once

#include "RE/M/Movie.h"

namespace RE
{
	class __declspec(novtable) MoviePlayer
	{
	public:
		static constexpr auto RTTI{ RTTI::MoviePlayer };

		virtual ~MoviePlayer();                                                  // 00
		virtual void          PauseAllAudio() = 0;                               // 01
		virtual void          UnpauseAllAudio() = 0;                             // 02
		virtual void          PauseMusic() = 0;                                  // 03
		virtual void          UnpauseMusic() = 0;                                // 04
		virtual void          PreBinkOpen() = 0;                                 // 05
		virtual void          PostBinkOpen() = 0;                                // 06
		virtual void          LockRenderer() = 0;                                // 07
		virtual void          UnlockRenderer() = 0;                              // 08
		virtual std::uint32_t GetScreenWidth() = 0;                              // 09
		virtual std::uint32_t GetScreenHeight() = 0;                             // 0A
		virtual bool          IsInFrame() = 0;                                   // 0B
		virtual void          QueueResourceDeletion(BINKTEXTURESET* a_set) = 0;  // 0C
		virtual std::uint32_t GetMainThreadID() = 0;                             // 0D

		[[nodiscard]] static MoviePlayer* GetSingleton()
		{
			static REL::Relocation<MoviePlayer**> singleton{ ID::MoviePlayer::Singleton };
			return *singleton;
		}

		bool Play(Movie::PlaybackSettings& a_settings, bool a_reuseCurrent)
		{
			using func_t = decltype(&MoviePlayer::Play);
			static REL::Relocation<func_t> func{ ID::MoviePlayer::Play };
			return func(this, a_settings, a_reuseCurrent);
		}

		bool PlayBackground(Movie::PlaybackSettings& a_settings)
		{
			using func_t = decltype(&MoviePlayer::PlayBackground);
			static REL::Relocation<func_t> func{ ID::MoviePlayer::PlayBackground };
			return func(this, a_settings);
		}

		bool Update()
		{
			using func_t = decltype(&MoviePlayer::Update);
			static REL::Relocation<func_t> func{ ID::MoviePlayer::Update };
			return func(this);
		}

		void Stop()
		{
			using func_t = decltype(&MoviePlayer::Stop);
			static REL::Relocation<func_t> func{ ID::MoviePlayer::Stop };
			return func(this);
		}

		void RequestStop()
		{
			using func_t = decltype(&MoviePlayer::RequestStop);
			static REL::Relocation<func_t> func{ ID::MoviePlayer::RequestStop };
			return func(this);
		}

		// members
		std::uint64_t unk08;            // 08
		void*         sequenceThread;   // 10
		Movie*        current;          // 18
		Movie*        suspended;        // 20
		Movie*        preloaded;        // 28
		bool          preloadedValid;   // 30
		void        (*onPreloadDone)(); // 38
		std::uint8_t  unk40;            // 40
		bool          stopRequested;    // 41
		bool          alternateScale;   // 42
		bool          loop;             // 43
		void*         openSemaphore;    // 48
		bool          openSignalled;    // 50
	};
	static_assert(offsetof(MoviePlayer, sequenceThread) == 0x10);
	static_assert(offsetof(MoviePlayer, current) == 0x18);
	static_assert(offsetof(MoviePlayer, stopRequested) == 0x41);
	static_assert(offsetof(MoviePlayer, openSemaphore) == 0x48);
}
