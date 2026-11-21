#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkbBehaviorGraph;
	class hkbCharacterSetup;
	class hkbProjectData;

	class __declspec(novtable) hkbCharacter :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacter };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacter };

		// add
		virtual void Unk_04();  // 0x20 [04]
		virtual void getNearbyCharacters();  // 0x28 [05] (float_hkArray_hkbCharacter__hkContainerHeapAllocator_&)

		enum class CapabilityTypes : std::uint32_t
		{
			kFullPose = 1,
			kMirroring = 2,
			kDocking = 4,
			kHandIk = 8,
			kCharacterControl = 16,
			kRagdoll = 32,
			kFootIk = 64,
			kAiControl = 128,
			kBasicCapabilities = 7,
			kPhysicsCapabilities = 120,
			kStandardCapabilities = 127
		};

		// members
		hkArray<hkbCharacter*> m_nearbyCharacters;  // 0x10
		std::uint64_t m_userData;                   // 0x20
		std::int16_t m_currentLod;                  // 0x28
		std::int16_t m_numTracksInLod;              // 0x2A
		std::uint8_t pad2C[0x4];                    // 0x2C
		void* m_generatorOutput;                    // 0x30
		hkStringPtr m_name;                         // 0x38
		void* m_ragdollDriver;                      // 0x40
		void* m_ragdollInterface;                   // 0x48
		void* m_characterControllerDriver;          // 0x50
		void* m_footIkDriver;                       // 0x58
		void* m_handIkDriver;                       // 0x60
		void* m_dockingDriver;                      // 0x68
		void* m_aiControlDriver;                    // 0x70
		hkbCharacterSetup* m_setup;                 // 0x78
		hkbBehaviorGraph* m_behaviorGraph;          // 0x80
		hkbProjectData* m_projectData;              // 0x88
		void* m_animationBindingSet;                // 0x90
		void* m_spatialQueryInterface;              // 0x98
		void* m_world;                              // 0xA0
		hkArray<void*> m_boneAttachments;           // 0xA8
		void* m_eventQueue;                         // 0xB8
		void* m_characterLuaState;                  // 0xC0
		void* m_assetManager;                       // 0xC8
		std::int32_t m_capabilities;                // 0xD0
		std::int32_t m_effectiveCapabilities;       // 0xD4
	};
	static_assert(sizeof(hkbCharacter) == 0xD8);
	static_assert(offsetof(hkbCharacter, m_nearbyCharacters) == 0x10);
	static_assert(offsetof(hkbCharacter, m_userData) == 0x20);
	static_assert(offsetof(hkbCharacter, m_currentLod) == 0x28);
	static_assert(offsetof(hkbCharacter, m_numTracksInLod) == 0x2A);
	static_assert(offsetof(hkbCharacter, m_generatorOutput) == 0x30);
	static_assert(offsetof(hkbCharacter, m_name) == 0x38);
	static_assert(offsetof(hkbCharacter, m_ragdollDriver) == 0x40);
	static_assert(offsetof(hkbCharacter, m_ragdollInterface) == 0x48);
	static_assert(offsetof(hkbCharacter, m_characterControllerDriver) == 0x50);
	static_assert(offsetof(hkbCharacter, m_footIkDriver) == 0x58);
	static_assert(offsetof(hkbCharacter, m_handIkDriver) == 0x60);
	static_assert(offsetof(hkbCharacter, m_dockingDriver) == 0x68);
	static_assert(offsetof(hkbCharacter, m_aiControlDriver) == 0x70);
	static_assert(offsetof(hkbCharacter, m_setup) == 0x78);
	static_assert(offsetof(hkbCharacter, m_behaviorGraph) == 0x80);
	static_assert(offsetof(hkbCharacter, m_projectData) == 0x88);
	static_assert(offsetof(hkbCharacter, m_animationBindingSet) == 0x90);
	static_assert(offsetof(hkbCharacter, m_spatialQueryInterface) == 0x98);
	static_assert(offsetof(hkbCharacter, m_world) == 0xA0);
	static_assert(offsetof(hkbCharacter, m_boneAttachments) == 0xA8);
	static_assert(offsetof(hkbCharacter, m_eventQueue) == 0xB8);
	static_assert(offsetof(hkbCharacter, m_characterLuaState) == 0xC0);
	static_assert(offsetof(hkbCharacter, m_assetManager) == 0xC8);
	static_assert(offsetof(hkbCharacter, m_capabilities) == 0xD0);
	static_assert(offsetof(hkbCharacter, m_effectiveCapabilities) == 0xD4);
}
