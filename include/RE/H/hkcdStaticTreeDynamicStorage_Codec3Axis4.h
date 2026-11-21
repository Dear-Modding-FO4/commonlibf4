#pragma once

#include "RE/H/hkArray.h"

namespace RE
{
	class hkcdStaticTreeCodec3Axis4;

	class hkcdStaticTreeDynamicStorage_Codec3Axis4
	{
	public:

		// members
		hkArray<hkcdStaticTreeCodec3Axis4> m_nodes;  // 0x00
	};
	static_assert(sizeof(hkcdStaticTreeDynamicStorage_Codec3Axis4) == 0x10);
	static_assert(offsetof(hkcdStaticTreeDynamicStorage_Codec3Axis4, m_nodes) == 0x0);
}
