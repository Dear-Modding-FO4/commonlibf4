#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class hkbBoolVariableSequencedData;
	class hkbEventSequencedData;
	class hkbIntVariableSequencedData;
	class hkbRealVariableSequencedData;
	class hkbSequenceStringData;

	class __declspec(novtable) hkbSequence :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSequence };
		inline static constexpr auto VTABLE{ VTABLE::hkbSequence };

		// members
		hkArray<hkbEventSequencedData*> m_eventSequencedData;                // 0x58
		hkArray<hkbRealVariableSequencedData*> m_realVariableSequencedData;  // 0x68
		hkArray<hkbBoolVariableSequencedData*> m_boolVariableSequencedData;  // 0x78
		hkArray<hkbIntVariableSequencedData*> m_intVariableSequencedData;    // 0x88
		std::int32_t m_enableEventId;                                        // 0x98
		std::int32_t m_disableEventId;                                       // 0x9C
		hkbSequenceStringData* m_stringData;                                 // 0xA0
		void* m_variableIdMap;                                               // 0xA8
		void* m_eventIdMap;                                                  // 0xB0
		std::uint8_t m_nextSampleEvents[0x10];                               // 0xB8
		std::uint8_t m_nextSampleReals[0x10];                                // 0xC8
		std::uint8_t m_nextSampleBools[0x10];                                // 0xD8
		std::uint8_t m_nextSampleInts[0x10];                                 // 0xE8
		float m_time;                                                        // 0xF8
		bool m_isEnabled;                                                    // 0xFC
	};
	static_assert(sizeof(hkbSequence) == 0x100);
	static_assert(offsetof(hkbSequence, m_eventSequencedData) == 0x58);
	static_assert(offsetof(hkbSequence, m_realVariableSequencedData) == 0x68);
	static_assert(offsetof(hkbSequence, m_boolVariableSequencedData) == 0x78);
	static_assert(offsetof(hkbSequence, m_intVariableSequencedData) == 0x88);
	static_assert(offsetof(hkbSequence, m_enableEventId) == 0x98);
	static_assert(offsetof(hkbSequence, m_disableEventId) == 0x9C);
	static_assert(offsetof(hkbSequence, m_stringData) == 0xA0);
	static_assert(offsetof(hkbSequence, m_variableIdMap) == 0xA8);
	static_assert(offsetof(hkbSequence, m_eventIdMap) == 0xB0);
	static_assert(offsetof(hkbSequence, m_nextSampleEvents) == 0xB8);
	static_assert(offsetof(hkbSequence, m_nextSampleReals) == 0xC8);
	static_assert(offsetof(hkbSequence, m_nextSampleBools) == 0xD8);
	static_assert(offsetof(hkbSequence, m_nextSampleInts) == 0xE8);
	static_assert(offsetof(hkbSequence, m_time) == 0xF8);
	static_assert(offsetof(hkbSequence, m_isEnabled) == 0xFC);
}
