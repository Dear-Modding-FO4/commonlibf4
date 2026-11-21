#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hknpRefMaterial;

	class hknpMaterialDescriptor
	{
	public:

		// members
		hkStringPtr m_name;           // 0x00
		hknpRefMaterial* m_material;  // 0x08
		std::uint16_t m_materialId;   // 0x10
	};
	static_assert(sizeof(hknpMaterialDescriptor) == 0x18);
	static_assert(offsetof(hknpMaterialDescriptor, m_name) == 0x0);
	static_assert(offsetof(hknpMaterialDescriptor, m_material) == 0x8);
	static_assert(offsetof(hknpMaterialDescriptor, m_materialId) == 0x10);
}
