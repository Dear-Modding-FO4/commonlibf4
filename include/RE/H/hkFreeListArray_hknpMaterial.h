#pragma once

#include "RE/H/hkArray.h"

namespace RE
{
	class hknpMaterial;

	class hkFreeListArray_hknpMaterial
	{
	public:

		// members
		hkArray<hknpMaterial> m_elements;  // 0x00
		std::int32_t m_firstFree;          // 0x10
	};
	static_assert(sizeof(hkFreeListArray_hknpMaterial) == 0x18);
	static_assert(offsetof(hkFreeListArray_hknpMaterial, m_elements) == 0x0);
	static_assert(offsetof(hkFreeListArray_hknpMaterial, m_firstFree) == 0x10);
}
