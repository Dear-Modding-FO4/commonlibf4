#pragma once

#include "RE/H/hknpCompressedMeshShapeTreeDataRunData.h"

namespace RE
{
	class hkcdStaticMeshTreeBasePrimitiveDataRunBase_DataRunData
	{
	public:

		// members
		hknpCompressedMeshShapeTreeDataRunData m_value;  // 0x00
		std::uint8_t m_index;                            // 0x02
		std::uint8_t m_count;                            // 0x03
	};
	static_assert(sizeof(hkcdStaticMeshTreeBasePrimitiveDataRunBase_DataRunData) == 0x4);
	static_assert(offsetof(hkcdStaticMeshTreeBasePrimitiveDataRunBase_DataRunData, m_value) == 0x0);
	static_assert(offsetof(hkcdStaticMeshTreeBasePrimitiveDataRunBase_DataRunData, m_index) == 0x2);
	static_assert(offsetof(hkcdStaticMeshTreeBasePrimitiveDataRunBase_DataRunData, m_count) == 0x3);
}
