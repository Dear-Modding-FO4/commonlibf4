#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbGenerator.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbBehaviorGraphData;
	class hkbGenerator;

	class __declspec(novtable) hkbBehaviorGraph :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBehaviorGraph };
		inline static constexpr auto VTABLE{ VTABLE::hkbBehaviorGraph };

		enum class VariableMode : std::uint8_t
		{
			kVariableModeDiscardWhenInactive = 0,
			kVariableModeMaintainValuesWhenInactive = 1
		};

		// members
		hkEnum<VariableMode, std::int8_t> m_variableMode;                                      // 0x88
		std::uint8_t pad89[0x7];                                         // 0x89
		std::uint8_t m_uniqueIdPool[0x10];                               // 0x90
		void* m_idToStateMachineTemplateMap;                             // 0xA0
		std::uint8_t m_mirroredExternalIdMap[0x10];                      // 0xA8
		void* m_pseudoRandomGenerator;                                   // 0xB8
		hkbGenerator* m_rootGenerator;                                   // 0xC0
		hkbBehaviorGraphData* m_data;                                    // 0xC8
		void* m_template;                                                // 0xD0
		void* m_rootGeneratorClone;                                      // 0xD8
		void* m_activeNodes;                                             // 0xE0
		void* m_globalTransitionData;                                    // 0xE8
		void* m_eventIdMap;                                              // 0xF0
		void* m_attributeIdMap;                                          // 0xF8
		void* m_variableIdMap;                                           // 0x100
		void* m_characterPropertyIdMap;                                  // 0x108
		void* m_variableValueSet;                                        // 0x110
		void* m_nodeTemplateToCloneMap;                                  // 0x118
		void* m_stateListenerTemplateToCloneMap;                         // 0x120
		hkArray<void*> m_recentlyCreatedClones;                          // 0x128
		void* m_nodePartitionInfo;                                       // 0x138
		std::int32_t m_numIntermediateOutputs;                           // 0x140
		std::uint8_t pad144[0x4];                                        // 0x144
		std::uint8_t m_intermediateOutputSizes[0x10];                    // 0x148
		hkArray<void*> m_jobs;                                           // 0x158
		hkArray<void*> m_allPartitionMemory;                             // 0x168
		std::uint8_t m_internalToRootVariableIdMap[0x10];                // 0x178
		std::uint8_t m_internalToCharacterCharacterPropertyIdMap[0x10];  // 0x188
		std::uint8_t m_internalToRootAttributeIdMap[0x10];               // 0x198
		std::uint16_t m_nextUniqueId;                                    // 0x1A8
		bool m_isActive;                                                 // 0x1AA
		bool m_isLinked;                                                 // 0x1AB
		bool m_updateActiveNodes;                                        // 0x1AC
		bool m_updateActiveNodesForEnable;                               // 0x1AD
		bool m_checkNodeValidity;                                        // 0x1AE
		bool m_stateOrTransitionChanged;                                 // 0x1AF
	};
	static_assert(sizeof(hkbBehaviorGraph) == 0x1B0);
	static_assert(offsetof(hkbBehaviorGraph, m_variableMode) == 0x88);
	static_assert(offsetof(hkbBehaviorGraph, m_uniqueIdPool) == 0x90);
	static_assert(offsetof(hkbBehaviorGraph, m_idToStateMachineTemplateMap) == 0xA0);
	static_assert(offsetof(hkbBehaviorGraph, m_mirroredExternalIdMap) == 0xA8);
	static_assert(offsetof(hkbBehaviorGraph, m_pseudoRandomGenerator) == 0xB8);
	static_assert(offsetof(hkbBehaviorGraph, m_rootGenerator) == 0xC0);
	static_assert(offsetof(hkbBehaviorGraph, m_data) == 0xC8);
	static_assert(offsetof(hkbBehaviorGraph, m_template) == 0xD0);
	static_assert(offsetof(hkbBehaviorGraph, m_rootGeneratorClone) == 0xD8);
	static_assert(offsetof(hkbBehaviorGraph, m_activeNodes) == 0xE0);
	static_assert(offsetof(hkbBehaviorGraph, m_globalTransitionData) == 0xE8);
	static_assert(offsetof(hkbBehaviorGraph, m_eventIdMap) == 0xF0);
	static_assert(offsetof(hkbBehaviorGraph, m_attributeIdMap) == 0xF8);
	static_assert(offsetof(hkbBehaviorGraph, m_variableIdMap) == 0x100);
	static_assert(offsetof(hkbBehaviorGraph, m_characterPropertyIdMap) == 0x108);
	static_assert(offsetof(hkbBehaviorGraph, m_variableValueSet) == 0x110);
	static_assert(offsetof(hkbBehaviorGraph, m_nodeTemplateToCloneMap) == 0x118);
	static_assert(offsetof(hkbBehaviorGraph, m_stateListenerTemplateToCloneMap) == 0x120);
	static_assert(offsetof(hkbBehaviorGraph, m_recentlyCreatedClones) == 0x128);
	static_assert(offsetof(hkbBehaviorGraph, m_nodePartitionInfo) == 0x138);
	static_assert(offsetof(hkbBehaviorGraph, m_numIntermediateOutputs) == 0x140);
	static_assert(offsetof(hkbBehaviorGraph, m_intermediateOutputSizes) == 0x148);
	static_assert(offsetof(hkbBehaviorGraph, m_jobs) == 0x158);
	static_assert(offsetof(hkbBehaviorGraph, m_allPartitionMemory) == 0x168);
	static_assert(offsetof(hkbBehaviorGraph, m_internalToRootVariableIdMap) == 0x178);
	static_assert(offsetof(hkbBehaviorGraph, m_internalToCharacterCharacterPropertyIdMap) == 0x188);
	static_assert(offsetof(hkbBehaviorGraph, m_internalToRootAttributeIdMap) == 0x198);
	static_assert(offsetof(hkbBehaviorGraph, m_nextUniqueId) == 0x1A8);
	static_assert(offsetof(hkbBehaviorGraph, m_isActive) == 0x1AA);
	static_assert(offsetof(hkbBehaviorGraph, m_isLinked) == 0x1AB);
	static_assert(offsetof(hkbBehaviorGraph, m_updateActiveNodes) == 0x1AC);
	static_assert(offsetof(hkbBehaviorGraph, m_updateActiveNodesForEnable) == 0x1AD);
	static_assert(offsetof(hkbBehaviorGraph, m_checkNodeValidity) == 0x1AE);
	static_assert(offsetof(hkbBehaviorGraph, m_stateOrTransitionChanged) == 0x1AF);
}
