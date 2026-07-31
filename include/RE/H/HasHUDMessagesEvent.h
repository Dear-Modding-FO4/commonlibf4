#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class HasHUDMessagesEvent :
		public BSTValueEvent<bool>  // 00
	{
	public:
	};
	static_assert(sizeof(HasHUDMessagesEvent) == 0x02);
}
