#pragma once

#include "RE/H/hkAabb.h"
#include "RE/H/hkcdStaticTreeDynamicStorage6.h"

namespace RE
{
	class hkcdStaticTreeTree_DynamicStorage6 :
		public hkcdStaticTreeDynamicStorage6  // 0x00
	{
	public:

		// members
		hkAabb m_domain;  // 0x10
	};
	static_assert(sizeof(hkcdStaticTreeTree_DynamicStorage6) == 0x30);
	static_assert(offsetof(hkcdStaticTreeTree_DynamicStorage6, m_domain) == 0x10);
}
