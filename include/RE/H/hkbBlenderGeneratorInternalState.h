#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbBlenderGeneratorChildInternalState;

	class __declspec(novtable) hkbBlenderGeneratorInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBlenderGeneratorInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbBlenderGeneratorInternalState };

		// members
		hkArray<hkbBlenderGeneratorChildInternalState> m_childrenInternalStates;  // 0x10
		hkArray<std::int16_t> m_sortedChildren;                                   // 0x20
		float m_endIntervalWeight;                                                // 0x30
		std::int32_t m_numActiveChildren;                                         // 0x34
		std::int16_t m_beginIntervalIndex;                                        // 0x38
		std::int16_t m_endIntervalIndex;                                          // 0x3A
		bool m_initSync;                                                          // 0x3C
		bool m_doSubtractiveBlend;                                                // 0x3D
	};
	static_assert(sizeof(hkbBlenderGeneratorInternalState) == 0x40);
	static_assert(offsetof(hkbBlenderGeneratorInternalState, m_childrenInternalStates) == 0x10);
	static_assert(offsetof(hkbBlenderGeneratorInternalState, m_sortedChildren) == 0x20);
	static_assert(offsetof(hkbBlenderGeneratorInternalState, m_endIntervalWeight) == 0x30);
	static_assert(offsetof(hkbBlenderGeneratorInternalState, m_numActiveChildren) == 0x34);
	static_assert(offsetof(hkbBlenderGeneratorInternalState, m_beginIntervalIndex) == 0x38);
	static_assert(offsetof(hkbBlenderGeneratorInternalState, m_endIntervalIndex) == 0x3A);
	static_assert(offsetof(hkbBlenderGeneratorInternalState, m_initSync) == 0x3C);
	static_assert(offsetof(hkbBlenderGeneratorInternalState, m_doSubtractiveBlend) == 0x3D);
}
