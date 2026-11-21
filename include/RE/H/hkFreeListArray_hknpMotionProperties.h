#pragma once

#include "RE/H/hkArray.h"

namespace RE
{
	class hknpMotionProperties;

	class hkFreeListArray_hknpMotionProperties
	{
	public:

		// members
		hkArray<hknpMotionProperties> m_elements;  // 0x00
		std::int32_t m_firstFree;                  // 0x10
	};
	static_assert(sizeof(hkFreeListArray_hknpMotionProperties) == 0x18);
	static_assert(offsetof(hkFreeListArray_hknpMotionProperties, m_elements) == 0x0);
	static_assert(offsetof(hkFreeListArray_hknpMotionProperties, m_firstFree) == 0x10);
}
