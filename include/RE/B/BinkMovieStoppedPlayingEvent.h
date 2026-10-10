#pragma once

namespace RE
{
	struct BinkMovieStoppedPlayingEvent
	{
	public:
		// members
		bool unk00{ false };  // 00
	};
	static_assert(sizeof(BinkMovieStoppedPlayingEvent) == 0x1);
}
