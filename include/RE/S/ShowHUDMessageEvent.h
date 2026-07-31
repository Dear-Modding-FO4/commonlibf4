#pragma once

#include "RE/B/BSFixedString.h"

namespace RE
{
	class ShowHUDMessageEvent
	{
	public:
		// members
		BSFixedString messageText;       // 00
		BSFixedString soundName;         // 08
		bool          canBeThrottled;    // 10
		bool          isWarningMessage;  // 11
		bool          isRadioMessage;    // 12
	};
	static_assert(sizeof(ShowHUDMessageEvent) == 0x18);
}
