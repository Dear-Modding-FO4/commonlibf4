#pragma once
#include "RE/H/hkFlags.h"

namespace RE
{
	class hkbEventInfo
	{
	public:

		enum class Flags : std::uint32_t
		{
			kFlagSilent = 1,
			kFlagSyncPoint = 2
		};

		// members
		hkFlags<Flags, std::uint32_t> m_flags;  // 0x00
	};
	static_assert(sizeof(hkbEventInfo) == 0x4);
	static_assert(offsetof(hkbEventInfo, m_flags) == 0x0);
}
