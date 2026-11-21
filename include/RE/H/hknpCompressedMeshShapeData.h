#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkcdSimdTree.h"
#include "RE/H/hknpCompressedMeshShapeTree.h"

namespace RE
{
	class __declspec(novtable) hknpCompressedMeshShapeData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCompressedMeshShapeData };
		inline static constexpr auto VTABLE{ VTABLE::hknpCompressedMeshShapeData };

		// members
		hknpCompressedMeshShapeTree m_meshTree;  // 0x10
		hkcdSimdTree m_simdTree;                 // 0xB0
	};
	static_assert(sizeof(hknpCompressedMeshShapeData) == 0xD0);
	static_assert(offsetof(hknpCompressedMeshShapeData, m_meshTree) == 0x10);
	static_assert(offsetof(hknpCompressedMeshShapeData, m_simdTree) == 0xB0);
}
