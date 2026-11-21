#pragma once

#include "RE/H/hkArray.h"

namespace RE
{
	class hkcdStaticTreeCodec3Axis5;

	class hkcdStaticTreeDynamicStorage_Codec3Axis5
	{
	public:

		// members
		hkArray<hkcdStaticTreeCodec3Axis5> m_nodes;  // 0x00
	};
	static_assert(sizeof(hkcdStaticTreeDynamicStorage_Codec3Axis5) == 0x10);
	static_assert(offsetof(hkcdStaticTreeDynamicStorage_Codec3Axis5, m_nodes) == 0x0);
}
