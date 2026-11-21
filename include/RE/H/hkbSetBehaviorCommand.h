#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbBehaviorGraph;
	class hkbGenerator;

	class __declspec(novtable) hkbSetBehaviorCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSetBehaviorCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbSetBehaviorCommand };

		// members
		std::uint64_t m_characterId;                       // 0x10
		hkbBehaviorGraph* m_behavior;                      // 0x18
		hkbGenerator* m_rootGenerator;                     // 0x20
		hkArray<hkbBehaviorGraph*> m_referencedBehaviors;  // 0x28
		std::int32_t m_startStateIndex;                    // 0x38
		bool m_randomizeSimulation;                        // 0x3C
		std::uint8_t pad3D[0x3];                           // 0x3D
		std::int32_t m_padding;                            // 0x40
	};
	static_assert(sizeof(hkbSetBehaviorCommand) == 0x48);
	static_assert(offsetof(hkbSetBehaviorCommand, m_characterId) == 0x10);
	static_assert(offsetof(hkbSetBehaviorCommand, m_behavior) == 0x18);
	static_assert(offsetof(hkbSetBehaviorCommand, m_rootGenerator) == 0x20);
	static_assert(offsetof(hkbSetBehaviorCommand, m_referencedBehaviors) == 0x28);
	static_assert(offsetof(hkbSetBehaviorCommand, m_startStateIndex) == 0x38);
	static_assert(offsetof(hkbSetBehaviorCommand, m_randomizeSimulation) == 0x3C);
	static_assert(offsetof(hkbSetBehaviorCommand, m_padding) == 0x40);
}
