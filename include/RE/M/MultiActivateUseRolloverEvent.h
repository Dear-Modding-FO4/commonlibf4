#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	enum class MultiActivateRolloverMode : std::int32_t;

	class MultiActivateUseRolloverEvent :
		public BSTValueEvent<MultiActivateRolloverMode>  // 00
	{
	public:
	};
	static_assert(sizeof(MultiActivateUseRolloverEvent) == 0x08);
}
