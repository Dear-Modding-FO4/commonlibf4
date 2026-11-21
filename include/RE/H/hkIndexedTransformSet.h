#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkMeshBoneIndexMapping;

	class __declspec(novtable) hkIndexedTransformSet :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkIndexedTransformSet };
		inline static constexpr auto VTABLE{ VTABLE::hkIndexedTransformSet };

		// members
		std::uint8_t m_matrices[0x10];                    // 0x10
		std::uint8_t m_inverseMatrices[0x10];             // 0x20
		hkArray<std::int16_t> m_matricesOrder;            // 0x30
		hkArray<hkStringPtr> m_matricesNames;             // 0x40
		hkArray<hkMeshBoneIndexMapping> m_indexMappings;  // 0x50
		bool m_allMatricesAreAffine;                      // 0x60
	};
	static_assert(sizeof(hkIndexedTransformSet) == 0x68);
	static_assert(offsetof(hkIndexedTransformSet, m_matrices) == 0x10);
	static_assert(offsetof(hkIndexedTransformSet, m_inverseMatrices) == 0x20);
	static_assert(offsetof(hkIndexedTransformSet, m_matricesOrder) == 0x30);
	static_assert(offsetof(hkIndexedTransformSet, m_matricesNames) == 0x40);
	static_assert(offsetof(hkIndexedTransformSet, m_indexMappings) == 0x50);
	static_assert(offsetof(hkIndexedTransformSet, m_allMatricesAreAffine) == 0x60);
}
