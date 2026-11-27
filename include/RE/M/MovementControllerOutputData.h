#pragma once

#include "RE/M/MovementData.h"

namespace RE
{
	class MovementControllerOutputData :
		public MovementData
	{
	public:
		// members
		float unk30;  // 30
	};
	static_assert(offsetof(MovementControllerOutputData, unk30) == 0x30);
	static_assert(sizeof(MovementControllerOutputData) == 0x40);
}
