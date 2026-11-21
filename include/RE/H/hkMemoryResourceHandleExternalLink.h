#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkMemoryResourceHandleExternalLink
	{
	public:

		// members
		hkStringPtr m_memberName;  // 0x00
		hkStringPtr m_externalId;  // 0x08
	};
	static_assert(sizeof(hkMemoryResourceHandleExternalLink) == 0x10);
	static_assert(offsetof(hkMemoryResourceHandleExternalLink, m_memberName) == 0x0);
	static_assert(offsetof(hkMemoryResourceHandleExternalLink, m_externalId) == 0x8);
}
