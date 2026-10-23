#pragma once

namespace RE
{
	enum class REMOVE_TYPE : std::int32_t
	{
		kNone = 0,
		kStolen = 1,
		kConsumed = 2,
		kScript = 3,
		kDropped = 4,
		kGiven = 5,
		kPutInContainer = 6,

		kTotal = 7
	};
}
