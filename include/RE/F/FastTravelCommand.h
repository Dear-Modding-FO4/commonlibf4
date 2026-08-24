#pragma once

#include "RE/P/PipboyCommand.h"

namespace RE
{
	class __declspec(novtable) FastTravelCommand :
		public PipboyCommand  // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::FastTravelCommand };
		static constexpr auto VTABLE{ VTABLE::FastTravelCommand };

		// members
		uint32_t markerId;  // 028
	};
	static_assert(sizeof(FastTravelCommand) == 0x30);

}
