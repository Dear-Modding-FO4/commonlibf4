#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkMultiThreadCheck.h"
#include "RE/H/hkbPhysicsInterface.h"

namespace RE
{
	class __declspec(novtable) hkbnpPhysicsInterface :
		public hkbPhysicsInterface  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbnpPhysicsInterface };
		inline static constexpr auto VTABLE{ VTABLE::hkbnpPhysicsInterface };

		// members
		void* m_world;                                     // 0x18
		void* m_taskQueue;                                 // 0x20
		void* m_threadPool;                                // 0x28
		void* m_stepLocalAllocator;                        // 0x30
		hkMultiThreadCheck m_multiThreadCheck;             // 0x38
		std::uint8_t pad44[0x4];                           // 0x44
		void* m_criticalSection;                           // 0x48
		std::uint8_t m_newRbHandles[0x10];                 // 0x50
		std::uint8_t m_newConstraintHandles[0x10];         // 0x60
		std::uint8_t m_referencedRbHandles[0x10];          // 0x70
		std::uint8_t m_referencedConstraintHandles[0x10];  // 0x80
		hkArray<void*> m_referencedBodiesLocalFrames;      // 0x90
	};
	static_assert(sizeof(hkbnpPhysicsInterface) == 0xA0);
	static_assert(offsetof(hkbnpPhysicsInterface, m_world) == 0x18);
	static_assert(offsetof(hkbnpPhysicsInterface, m_taskQueue) == 0x20);
	static_assert(offsetof(hkbnpPhysicsInterface, m_threadPool) == 0x28);
	static_assert(offsetof(hkbnpPhysicsInterface, m_stepLocalAllocator) == 0x30);
	static_assert(offsetof(hkbnpPhysicsInterface, m_multiThreadCheck) == 0x38);
	static_assert(offsetof(hkbnpPhysicsInterface, m_criticalSection) == 0x48);
	static_assert(offsetof(hkbnpPhysicsInterface, m_newRbHandles) == 0x50);
	static_assert(offsetof(hkbnpPhysicsInterface, m_newConstraintHandles) == 0x60);
	static_assert(offsetof(hkbnpPhysicsInterface, m_referencedRbHandles) == 0x70);
	static_assert(offsetof(hkbnpPhysicsInterface, m_referencedConstraintHandles) == 0x80);
	static_assert(offsetof(hkbnpPhysicsInterface, m_referencedBodiesLocalFrames) == 0x90);
}
