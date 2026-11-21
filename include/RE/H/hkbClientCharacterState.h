#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkaSkeleton;
	class hkbAuxiliaryNodeInfo;
	class hkbBehaviorGraphData;
	class hkbBehaviorGraphInternalState;

	class __declspec(novtable) hkbClientCharacterState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbClientCharacterState };
		inline static constexpr auto VTABLE{ VTABLE::hkbClientCharacterState };

		// members
		hkArray<std::uint64_t> m_deformableSkinIds;              // 0x10
		hkArray<std::uint64_t> m_rigidSkinIds;                   // 0x20
		hkArray<std::int16_t> m_externalEventIds;                // 0x30
		hkArray<hkbAuxiliaryNodeInfo*> m_auxiliaryInfo;          // 0x40
		hkArray<std::int16_t> m_activeEventIds;                  // 0x50
		hkArray<std::int16_t> m_activeVariableIds;               // 0x60
		std::uint64_t m_characterId;                             // 0x70
		hkStringPtr m_instanceName;                              // 0x78
		hkStringPtr m_templateName;                              // 0x80
		hkStringPtr m_fullPathToProject;                         // 0x88
		hkStringPtr m_localScriptsPath;                          // 0x90
		hkStringPtr m_remoteScriptsPath;                         // 0x98
		hkbBehaviorGraphData* m_behaviorData;                    // 0xA0
		hkbBehaviorGraphInternalState* m_behaviorInternalState;  // 0xA8
		void* m_nodeIdToInternalStateMap;                        // 0xB0
		bool m_visible;                                          // 0xB8
		std::uint8_t padB9[0x3];                                 // 0xB9
		float m_elapsedSimulationTime;                           // 0xBC
		hkaSkeleton* m_skeleton;                                 // 0xC0
		std::uint8_t unkC8[0x8];                                 // 0xC8
		hkQsTransformf m_worldFromModel;                         // 0xD0
		hkArray<hkQsTransformf> m_poseModelSpace;                // 0x100
		hkArray<hkQsTransformf> m_rigidAttachmentTransforms;     // 0x110
	};
	static_assert(sizeof(hkbClientCharacterState) == 0x120);
	static_assert(offsetof(hkbClientCharacterState, m_deformableSkinIds) == 0x10);
	static_assert(offsetof(hkbClientCharacterState, m_rigidSkinIds) == 0x20);
	static_assert(offsetof(hkbClientCharacterState, m_externalEventIds) == 0x30);
	static_assert(offsetof(hkbClientCharacterState, m_auxiliaryInfo) == 0x40);
	static_assert(offsetof(hkbClientCharacterState, m_activeEventIds) == 0x50);
	static_assert(offsetof(hkbClientCharacterState, m_activeVariableIds) == 0x60);
	static_assert(offsetof(hkbClientCharacterState, m_characterId) == 0x70);
	static_assert(offsetof(hkbClientCharacterState, m_instanceName) == 0x78);
	static_assert(offsetof(hkbClientCharacterState, m_templateName) == 0x80);
	static_assert(offsetof(hkbClientCharacterState, m_fullPathToProject) == 0x88);
	static_assert(offsetof(hkbClientCharacterState, m_localScriptsPath) == 0x90);
	static_assert(offsetof(hkbClientCharacterState, m_remoteScriptsPath) == 0x98);
	static_assert(offsetof(hkbClientCharacterState, m_behaviorData) == 0xA0);
	static_assert(offsetof(hkbClientCharacterState, m_behaviorInternalState) == 0xA8);
	static_assert(offsetof(hkbClientCharacterState, m_nodeIdToInternalStateMap) == 0xB0);
	static_assert(offsetof(hkbClientCharacterState, m_visible) == 0xB8);
	static_assert(offsetof(hkbClientCharacterState, m_elapsedSimulationTime) == 0xBC);
	static_assert(offsetof(hkbClientCharacterState, m_skeleton) == 0xC0);
	static_assert(offsetof(hkbClientCharacterState, m_worldFromModel) == 0xD0);
	static_assert(offsetof(hkbClientCharacterState, m_poseModelSpace) == 0x100);
	static_assert(offsetof(hkbClientCharacterState, m_rigidAttachmentTransforms) == 0x110);
}
