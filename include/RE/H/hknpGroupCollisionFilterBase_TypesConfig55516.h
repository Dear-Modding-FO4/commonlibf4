#pragma once

#include "RE/H/hknpCollisionFilter.h"

namespace RE
{
	class __declspec(novtable) hknpGroupCollisionFilterBase_TypesConfig55516 :
		public hknpCollisionFilter  // 0x00
	{
	public:

		// members
		std::uint8_t unk10[0x10];                  // 0x10
		std::int32_t m_nextFreeSystemGroup;        // 0x20
		std::uint32_t m_collisionLookupTable[32];  // 0x24
		std::uint8_t unkA4[0xC];                   // 0xA4
	};
	static_assert(sizeof(hknpGroupCollisionFilterBase_TypesConfig55516) == 0xB0);
	static_assert(offsetof(hknpGroupCollisionFilterBase_TypesConfig55516, m_nextFreeSystemGroup) == 0x20);
	static_assert(offsetof(hknpGroupCollisionFilterBase_TypesConfig55516, m_collisionLookupTable) == 0x24);
}
