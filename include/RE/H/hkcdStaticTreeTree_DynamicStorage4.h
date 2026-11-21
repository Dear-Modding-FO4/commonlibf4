#pragma once

#include "RE/H/hkAabb.h"
#include "RE/H/hkcdStaticTreeDynamicStorage4.h"

namespace RE
{
	class hkcdStaticTreeTree_DynamicStorage4 :
		public hkcdStaticTreeDynamicStorage4  // 0x00
	{
	public:

		// members
		hkAabb m_domain;  // 0x10
	};
	static_assert(sizeof(hkcdStaticTreeTree_DynamicStorage4) == 0x30);
	static_assert(offsetof(hkcdStaticTreeTree_DynamicStorage4, m_domain) == 0x10);
}
