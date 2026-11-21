#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hknpPhysicsSystemData;
	class hknpRefWorldCinfo;

	class __declspec(novtable) hknpPhysicsSceneData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpPhysicsSceneData };
		inline static constexpr auto VTABLE{ VTABLE::hknpPhysicsSceneData };

		// members
		hkArray<hknpPhysicsSystemData*> m_systemDatas;  // 0x10
		hknpRefWorldCinfo* m_worldCinfo;                // 0x20
	};
	static_assert(sizeof(hknpPhysicsSceneData) == 0x28);
	static_assert(offsetof(hknpPhysicsSceneData, m_systemDatas) == 0x10);
	static_assert(offsetof(hknpPhysicsSceneData, m_worldCinfo) == 0x20);
}
