#pragma once

namespace RE
{
	enum class ACQUIRE_TYPE : std::int32_t
	{
		kNone = -1,
		kAlreadyHeld = 0,
		kNoOwned_Ground = 1,
		kNoOwned_Container = 2,
		kBuyNPC = 3,
		kStealGround = 4,
		kPickpocket = 5,
		kKill = 6,

		kTotal = 7
	};
}
