#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbGenerator.h"

namespace RE
{
	class hkbCustomIdSelector;
	class hkbGenerator;
	class hkbTransitionEffect;

	class __declspec(novtable) hkbManualSelectorGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbManualSelectorGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbManualSelectorGenerator };

		// members
		hkArray<hkbGenerator*> m_generators;                      // 0x88
		std::int16_t m_selectedGeneratorIndex;                    // 0x98
		std::uint8_t pad9A[0x6];                                  // 0x9A
		hkbCustomIdSelector* m_indexSelector;                     // 0xA0
		bool m_selectedIndexCanChangeAfterActivate;               // 0xA8
		std::uint8_t padA9[0x7];                                  // 0xA9
		hkbTransitionEffect* m_generatorChangedTransitionEffect;  // 0xB0
		std::int16_t m_currentGeneratorIndex;                     // 0xB8
		std::int16_t m_generatorIndexAtActivate;                  // 0xBA
		std::uint8_t padBC[0x4];                                  // 0xBC
		std::uint8_t m_activeTransitions[0x10];                   // 0xC0
	};
	static_assert(sizeof(hkbManualSelectorGenerator) == 0xD0);
	static_assert(offsetof(hkbManualSelectorGenerator, m_generators) == 0x88);
	static_assert(offsetof(hkbManualSelectorGenerator, m_selectedGeneratorIndex) == 0x98);
	static_assert(offsetof(hkbManualSelectorGenerator, m_indexSelector) == 0xA0);
	static_assert(offsetof(hkbManualSelectorGenerator, m_selectedIndexCanChangeAfterActivate) == 0xA8);
	static_assert(offsetof(hkbManualSelectorGenerator, m_generatorChangedTransitionEffect) == 0xB0);
	static_assert(offsetof(hkbManualSelectorGenerator, m_currentGeneratorIndex) == 0xB8);
	static_assert(offsetof(hkbManualSelectorGenerator, m_generatorIndexAtActivate) == 0xBA);
	static_assert(offsetof(hkbManualSelectorGenerator, m_activeTransitions) == 0xC0);
}
