#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkMeshShape.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkMemoryMeshShapeSection;

	class __declspec(novtable) hkMemoryMeshShape :
		public hkMeshShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMemoryMeshShape };
		inline static constexpr auto VTABLE{ VTABLE::hkMemoryMeshShape };

		// members
		hkArray<hkMemoryMeshShapeSection> m_sections;  // 0x10
		hkArray<std::uint16_t> m_indices16;            // 0x20
		hkArray<std::uint32_t> m_indices32;            // 0x30
		hkStringPtr m_name;                            // 0x40
	};
	static_assert(sizeof(hkMemoryMeshShape) == 0x48);
	static_assert(offsetof(hkMemoryMeshShape, m_sections) == 0x10);
	static_assert(offsetof(hkMemoryMeshShape, m_indices16) == 0x20);
	static_assert(offsetof(hkMemoryMeshShape, m_indices32) == 0x30);
	static_assert(offsetof(hkMemoryMeshShape, m_name) == 0x40);
}
