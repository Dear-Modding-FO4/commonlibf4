#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkbRagdollInterface.h"
#include "RE/H/hknpRagdoll.h"

namespace RE
{
	class hkbnpPhysicsInterface;

	class __declspec(novtable) hkbnpRagdollInterface :
		public hkbRagdollInterface  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbnpRagdollInterface };
		inline static constexpr auto VTABLE{ VTABLE::hkbnpRagdollInterface };

		hkbnpRagdollInterface() = delete;
		virtual ~hkbnpRagdollInterface() override;  // 00
		virtual bool IsInWorld() const override;    // 04

		// members
		hkRefPtr<hkbnpPhysicsInterface> m_physicsInterface;  // 0x10
		hkRefPtr<hknpRagdoll>           m_ragdoll;           // 0x18
		hkArray<void*>                  m_scaledObjects;     // 0x20
		hkArray<void*>                  m_rigidBodyHandles;  // 0x30
		hkArray<std::uint8_t>           unk40;               // 0x40
		std::uint8_t                    unk50[0x8];          // 0x50
		bool                            m_addedToWorld;      // 0x58
	};
	static_assert(sizeof(hkbnpRagdollInterface) == 0x60);
	static_assert(offsetof(hkbnpRagdollInterface, m_physicsInterface) == 0x10);
	static_assert(offsetof(hkbnpRagdollInterface, m_ragdoll) == 0x18);
	static_assert(offsetof(hkbnpRagdollInterface, m_scaledObjects) == 0x20);
	static_assert(offsetof(hkbnpRagdollInterface, m_rigidBodyHandles) == 0x30);
	static_assert(offsetof(hkbnpRagdollInterface, unk40) == 0x40);
	static_assert(offsetof(hkbnpRagdollInterface, unk50) == 0x50);
	static_assert(offsetof(hkbnpRagdollInterface, m_addedToWorld) == 0x58);
}
