#pragma once

#include "RE/H/hkbEventBase.h"

namespace RE
{
	class hkbEvent :
		public hkbEventBase  // 0x00
	{
	public:

		// members
		void* m_sender;  // 0x10
	};
	static_assert(sizeof(hkbEvent) == 0x18);
	static_assert(offsetof(hkbEvent, m_sender) == 0x10);
}
