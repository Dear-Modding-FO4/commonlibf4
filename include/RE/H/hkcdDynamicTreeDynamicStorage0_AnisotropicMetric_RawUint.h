#pragma once

#include "RE/H/hkArray.h"

namespace RE
{
	class hkcdDynamicTreeCodecRawUint;

	class hkcdDynamicTreeDynamicStorage0_AnisotropicMetric_RawUint
	{
	public:

		// members
		hkArray<hkcdDynamicTreeCodecRawUint> m_nodes;  // 0x00
		std::uint32_t m_firstFree;                     // 0x10
	};
	static_assert(sizeof(hkcdDynamicTreeDynamicStorage0_AnisotropicMetric_RawUint) == 0x18);
	static_assert(offsetof(hkcdDynamicTreeDynamicStorage0_AnisotropicMetric_RawUint, m_nodes) == 0x0);
	static_assert(offsetof(hkcdDynamicTreeDynamicStorage0_AnisotropicMetric_RawUint, m_firstFree) == 0x10);
}
