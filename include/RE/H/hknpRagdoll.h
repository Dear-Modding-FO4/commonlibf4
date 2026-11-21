#pragma once

#include "RE/H/hknpPhysicsSystem.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkRefPtr.h"

namespace RE
{
	class hkaSkeleton;

	class __declspec(novtable) hknpRagdoll :
		public hknpPhysicsSystem  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpRagdoll };
		inline static constexpr auto VTABLE{ VTABLE::hknpRagdoll };

		hknpRagdoll() = delete;
		virtual ~hknpRagdoll() override;  // 00

		// members
		hkRefPtr<const hkaSkeleton> m_skeleton;       // 0x40
		hkArray<std::int32_t>       m_boneToBodyMap;  // 0x48
	};
	static_assert(sizeof(hknpRagdoll) == 0x58);
	static_assert(offsetof(hknpRagdoll, m_skeleton) == 0x40);
	static_assert(offsetof(hknpRagdoll, m_boneToBodyMap) == 0x48);
}
