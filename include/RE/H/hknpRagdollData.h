#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpPhysicsSystemData.h"

namespace RE
{
	class hkaSkeleton;

	class __declspec(novtable) hknpRagdollData :
		public hknpPhysicsSystemData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpRagdollData };
		inline static constexpr auto VTABLE{ VTABLE::hknpRagdollData };

		// members
		hkaSkeleton* m_skeleton;                // 0x78
		hkArray<std::int32_t> m_boneToBodyMap;  // 0x80
	};
	static_assert(sizeof(hknpRagdollData) == 0x90);
	static_assert(offsetof(hknpRagdollData, m_skeleton) == 0x78);
	static_assert(offsetof(hknpRagdollData, m_boneToBodyMap) == 0x80);
}
