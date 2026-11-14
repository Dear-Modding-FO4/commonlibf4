#pragma once

#include "RE/H/hknpPhysicsSystem.h"

namespace RE
{
	class hkaSkeleton;

	class __declspec(novtable) hknpRagdoll :
		public hknpPhysicsSystem
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpRagdoll };
		static constexpr auto VTABLE{ VTABLE::hknpRagdoll };

		hknpRagdoll() = delete;
		virtual ~hknpRagdoll() override;  // 00

		// members
		hkRefPtr<hkaSkeleton> m_skeleton;   // 40
		std::byte             unk48[0x10];  // 48
	};
	static_assert(offsetof(hknpRagdoll, m_skeleton) == 0x40);
	static_assert(sizeof(hknpRagdoll) == 0x58);
}
