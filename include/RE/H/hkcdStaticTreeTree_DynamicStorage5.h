#pragma once

#include "RE/H/hkAabb.h"
#include "RE/H/hkcdStaticTreeDynamicStorage5.h"

namespace RE
{
	class hkcdStaticTreeTree_DynamicStorage5 :
		public hkcdStaticTreeDynamicStorage5  // 0x00
	{
	public:

		// members
		hkAabb m_domain;  // 0x10
	};
	static_assert(sizeof(hkcdStaticTreeTree_DynamicStorage5) == 0x30);
	static_assert(offsetof(hkcdStaticTreeTree_DynamicStorage5, m_domain) == 0x10);
}
