#pragma once

#include "RE/B/BSIMusicTrack.h"

namespace RE
{
	class __declspec(novtable) BGSMusicTrack : public BSIMusicTrack
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSMusicTrack };
		static constexpr auto VTABLE{ VTABLE::BGSMusicTrack };
	};
}
