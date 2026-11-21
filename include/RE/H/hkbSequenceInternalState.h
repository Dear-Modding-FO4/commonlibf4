#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbSequenceInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSequenceInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbSequenceInternalState };

		// members
		hkArray<std::int32_t> m_nextSampleEvents;  // 0x10
		hkArray<std::int32_t> m_nextSampleReals;   // 0x20
		hkArray<std::int32_t> m_nextSampleBools;   // 0x30
		hkArray<std::int32_t> m_nextSampleInts;    // 0x40
		float m_time;                              // 0x50
		bool m_isEnabled;                          // 0x54
	};
	static_assert(sizeof(hkbSequenceInternalState) == 0x58);
	static_assert(offsetof(hkbSequenceInternalState, m_nextSampleEvents) == 0x10);
	static_assert(offsetof(hkbSequenceInternalState, m_nextSampleReals) == 0x20);
	static_assert(offsetof(hkbSequenceInternalState, m_nextSampleBools) == 0x30);
	static_assert(offsetof(hkbSequenceInternalState, m_nextSampleInts) == 0x40);
	static_assert(offsetof(hkbSequenceInternalState, m_time) == 0x50);
	static_assert(offsetof(hkbSequenceInternalState, m_isEnabled) == 0x54);
}
