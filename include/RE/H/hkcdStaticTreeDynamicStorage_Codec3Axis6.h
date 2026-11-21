#pragma once

#include "RE/H/hkArray.h"

namespace RE
{
	class hkcdStaticTreeCodec3Axis6;

	class hkcdStaticTreeDynamicStorage_Codec3Axis6
	{
	public:

		// members
		hkArray<hkcdStaticTreeCodec3Axis6> m_nodes;  // 0x00
	};
	static_assert(sizeof(hkcdStaticTreeDynamicStorage_Codec3Axis6) == 0x10);
	static_assert(offsetof(hkcdStaticTreeDynamicStorage_Codec3Axis6, m_nodes) == 0x0);
}
