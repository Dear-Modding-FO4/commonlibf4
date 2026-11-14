#pragma once

#include "RE/H/hkRefPtr.h"
#include "RE/H/hkbRagdollInterface.h"
#include "RE/H/hknpRagdoll.h"

namespace RE
{
	class hkbnpPhysicsInterface;

	class __declspec(novtable) hkbnpRagdollInterface :
		public hkbRagdollInterface
	{
	public:
		static constexpr auto RTTI{ RTTI::hkbnpRagdollInterface };
		static constexpr auto VTABLE{ VTABLE::hkbnpRagdollInterface };

		hkbnpRagdollInterface() = delete;
		virtual ~hkbnpRagdollInterface() override;  // 00
		virtual bool IsInWorld() const override;    // 04

		// members
		hkRefPtr<hkbnpPhysicsInterface> physicsInterface;  // 10
		hkRefPtr<hknpRagdoll>           ragdoll;           // 18
		std::byte                       unk20[0x40];       // 20
	};
	static_assert(offsetof(hkbnpRagdollInterface, ragdoll) == 0x18);
	static_assert(sizeof(hkbnpRagdollInterface) == 0x60);
}
