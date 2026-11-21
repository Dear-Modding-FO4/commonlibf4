#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkxAttributeHolder.h"

namespace RE
{
	class __declspec(novtable) hkxMeshUserChannelInfo :
		public hkxAttributeHolder  // 0x00
	{
	public:

		// members
		hkStringPtr m_name;       // 0x20
		hkStringPtr m_className;  // 0x28
	};
	static_assert(sizeof(hkxMeshUserChannelInfo) == 0x30);
	static_assert(offsetof(hkxMeshUserChannelInfo, m_name) == 0x20);
	static_assert(offsetof(hkxMeshUserChannelInfo, m_className) == 0x28);
}
