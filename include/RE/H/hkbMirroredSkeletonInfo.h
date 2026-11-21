#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbMirroredSkeletonInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbMirroredSkeletonInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbMirroredSkeletonInfo };

		// members
		hkVector4f m_mirrorAxis;                   // 0x10
		hkArray<std::int16_t> m_bonePairMap;       // 0x20
		hkArray<std::int16_t> m_partitionPairMap;  // 0x30
	};
	static_assert(sizeof(hkbMirroredSkeletonInfo) == 0x40);
	static_assert(offsetof(hkbMirroredSkeletonInfo, m_mirrorAxis) == 0x10);
	static_assert(offsetof(hkbMirroredSkeletonInfo, m_bonePairMap) == 0x20);
	static_assert(offsetof(hkbMirroredSkeletonInfo, m_partitionPairMap) == 0x30);
}
