#pragma once

#include "RE/B/BSPathingAvoidNodeArray.h"
#include "RE/B/BSPathingSearchAreaRestrictions.h"
#include "RE/B/BSTSmartPointer.h"

namespace RE
{
	class BSPathingRestrictions
	{
	public:
		BSTSmartPointer<BSPathingAvoidNodeArray> avoidNodeArray;    // 00
		BSPathingSearchAreaRestrictions          areaRestrictions;  // 08
	};
	static_assert(sizeof(BSPathingRestrictions) == 0x18);
}
