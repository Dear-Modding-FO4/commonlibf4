#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkcdSimdTree.h"
#include "RE/H/hkcdStaticTreeDefaultTreeStorage6.h"

namespace RE
{
	class __declspec(novtable) hknpExternMeshShapeData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpExternMeshShapeData };
		inline static constexpr auto VTABLE{ VTABLE::hknpExternMeshShapeData };

		// members
		hkcdStaticTreeDefaultTreeStorage6 m_aabbTree;  // 0x10
		hkcdSimdTree m_simdTree;                       // 0x40
		void* m_buildContext;                          // 0x58
	};
	static_assert(sizeof(hknpExternMeshShapeData) == 0x60);
	static_assert(offsetof(hknpExternMeshShapeData, m_aabbTree) == 0x10);
	static_assert(offsetof(hknpExternMeshShapeData, m_simdTree) == 0x40);
	static_assert(offsetof(hknpExternMeshShapeData, m_buildContext) == 0x58);
}
