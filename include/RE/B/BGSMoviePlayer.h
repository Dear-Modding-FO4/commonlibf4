#pragma once

#include "RE/M/MoviePlayer.h"

namespace RE
{
	class __declspec(novtable) BGSMoviePlayer :
		public MoviePlayer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSMoviePlayer };
		static constexpr auto VTABLE{ VTABLE::BGSMoviePlayer };
	};
	static_assert(sizeof(BGSMoviePlayer) == 0x58);
}
