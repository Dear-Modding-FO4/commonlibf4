#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkSkinnedMeshShape.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkSkinnedMeshShapeBoneSection;
	class hkSkinnedMeshShapeBoneSet;
	class hkSkinnedMeshShapePart;

	class __declspec(novtable) hkStorageSkinnedMeshShape :
		public hkSkinnedMeshShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkStorageSkinnedMeshShape };
		inline static constexpr auto VTABLE{ VTABLE::hkStorageSkinnedMeshShape };

		// members
		hkArray<std::int16_t> m_bonesBuffer;                    // 0x10
		hkArray<hkSkinnedMeshShapeBoneSet> m_boneSets;          // 0x20
		hkArray<hkSkinnedMeshShapeBoneSection> m_boneSections;  // 0x30
		hkArray<hkSkinnedMeshShapePart> m_parts;                // 0x40
		hkStringPtr m_name;                                     // 0x50
	};
	static_assert(sizeof(hkStorageSkinnedMeshShape) == 0x58);
	static_assert(offsetof(hkStorageSkinnedMeshShape, m_bonesBuffer) == 0x10);
	static_assert(offsetof(hkStorageSkinnedMeshShape, m_boneSets) == 0x20);
	static_assert(offsetof(hkStorageSkinnedMeshShape, m_boneSections) == 0x30);
	static_assert(offsetof(hkStorageSkinnedMeshShape, m_parts) == 0x40);
	static_assert(offsetof(hkStorageSkinnedMeshShape, m_name) == 0x50);
}
