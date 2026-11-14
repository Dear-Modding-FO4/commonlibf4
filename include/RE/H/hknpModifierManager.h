#pragma once

#include "RE/H/hkRefPtr.h"

namespace RE
{
	class hknpCollisionFilter;

	class hknpModifierManager
	{
	public:
		// Construction and lifetime belong to the owning hknpWorld.
		hknpModifierManager() = delete;

		// members
		std::byte                     unk000[0x5E8];      // 000
		hkRefPtr<hknpCollisionFilter> m_collisionFilter;  // 5E8
		std::byte                     unk5F0[0x28];       // 5F0
	};
	static_assert(offsetof(hknpModifierManager, m_collisionFilter) == 0x5E8);
	static_assert(sizeof(hknpModifierManager) == 0x618);
}
