#pragma once

#include "RE/B/BinkMovieStoppedPlayingEvent.h"
#include "RE/G/GameMenuBase.h"

namespace RE
{
	namespace nsPlayBinkMenu
	{
		class __declspec(novtable) InitDataMessage :
			public UIMessage  // 00
		{
		public:
			static constexpr auto RTTI{ RTTI::nsPlayBinkMenu__InitDataMessage };
			static constexpr auto VTABLE{ VTABLE::nsPlayBinkMenu__InitDataMessage };

			// members
			BSFixedString movieName;  // 18
			std::uint32_t flags;      // 20
		};
		static_assert(sizeof(InitDataMessage) == 0x28);
	}

	class __declspec(novtable) PlayBinkMenu :
		public GameMenuBase,                               // 00
		public BSTEventSink<BinkMovieStoppedPlayingEvent>  // E0
	{
	public:
		static constexpr auto RTTI{ RTTI::PlayBinkMenu };
		static constexpr auto VTABLE{ VTABLE::PlayBinkMenu };
		static constexpr auto MENU_NAME{ "PlayBinkMenu"sv };

		enum class PLAY_FLAGS : std::uint32_t
		{
			kAlternateScale = 1u << 1,
			kPauseAudio = 1u << 2,
			kPauseMusic = 1u << 3,
			kWhiteFade = 1u << 4
		};

		// override (GameMenuBase)
		virtual UI_MESSAGE_RESULTS ProcessMessage(UIMessage& a_message) override;                   // 03
		virtual void               AdvanceMovie(float a_timeDelta, std::uint64_t a_time) override;  // 04

		// override (BSInputEventUser)
		virtual void OnButtonEvent(const ButtonEvent* a_event) override;  // 08

		// override (BSTEventSink<BinkMovieStoppedPlayingEvent>)
		virtual BSEventNotifyControl ProcessEvent(const BinkMovieStoppedPlayingEvent& a_event, BSTEventSource<BinkMovieStoppedPlayingEvent>* a_source) override;  // 01

		// members
		std::uint64_t                         currentTime;  // E8
		std::uint64_t                         armedTime;    // F0
		BSFixedString                         movieName;    // F8
		REX::TEnumSet<PLAY_FLAGS, std::uint32_t> flags;     // 100
	};
	static_assert(sizeof(PlayBinkMenu) == 0x108);
}
