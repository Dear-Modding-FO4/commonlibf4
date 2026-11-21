#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbGenerator.h"

namespace RE
{
	class hkbRadialSelectorGeneratorGeneratorPair;

	class __declspec(novtable) hkbRadialSelectorGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRadialSelectorGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbRadialSelectorGenerator };

		// members
		hkArray<hkbRadialSelectorGeneratorGeneratorPair> m_generatorPairs;  // 0x88
		float m_angle;                                                      // 0x98
		float m_radius;                                                     // 0x9C
		std::int32_t m_currentGeneratorPairIndex;                           // 0xA0
		std::int32_t m_currentEndpointIndex;                                // 0xA4
		float m_currentFraction;                                            // 0xA8
		bool m_hasSetLocalTime;                                             // 0xAC
		std::int8_t m_pad[4];                                               // 0xAD
	};
	static_assert(sizeof(hkbRadialSelectorGenerator) == 0xB8);
	static_assert(offsetof(hkbRadialSelectorGenerator, m_generatorPairs) == 0x88);
	static_assert(offsetof(hkbRadialSelectorGenerator, m_angle) == 0x98);
	static_assert(offsetof(hkbRadialSelectorGenerator, m_radius) == 0x9C);
	static_assert(offsetof(hkbRadialSelectorGenerator, m_currentGeneratorPairIndex) == 0xA0);
	static_assert(offsetof(hkbRadialSelectorGenerator, m_currentEndpointIndex) == 0xA4);
	static_assert(offsetof(hkbRadialSelectorGenerator, m_currentFraction) == 0xA8);
	static_assert(offsetof(hkbRadialSelectorGenerator, m_hasSetLocalTime) == 0xAC);
	static_assert(offsetof(hkbRadialSelectorGenerator, m_pad) == 0xAD);
}
