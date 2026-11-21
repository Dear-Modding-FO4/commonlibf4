#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbStateMachineActiveTransitionInfo;

	class __declspec(novtable) hkbManualSelectorGeneratorInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbManualSelectorGeneratorInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbManualSelectorGeneratorInternalState };

		// members
		std::int16_t m_currentGeneratorIndex;                              // 0x10
		std::int16_t m_generatorIndexAtActivate;                           // 0x12
		std::uint8_t pad14[0x4];                                           // 0x14
		hkArray<hkbStateMachineActiveTransitionInfo> m_activeTransitions;  // 0x18
	};
	static_assert(sizeof(hkbManualSelectorGeneratorInternalState) == 0x28);
	static_assert(offsetof(hkbManualSelectorGeneratorInternalState, m_currentGeneratorIndex) == 0x10);
	static_assert(offsetof(hkbManualSelectorGeneratorInternalState, m_generatorIndexAtActivate) == 0x12);
	static_assert(offsetof(hkbManualSelectorGeneratorInternalState, m_activeTransitions) == 0x18);
}
