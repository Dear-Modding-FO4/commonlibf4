#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkaBone
	{
	public:

		// members
		hkStringPtr m_name;      // 0x00
		bool m_lockTranslation;  // 0x08
	};
	static_assert(sizeof(hkaBone) == 0x10);
	static_assert(offsetof(hkaBone, m_name) == 0x0);
	static_assert(offsetof(hkaBone, m_lockTranslation) == 0x8);
}
