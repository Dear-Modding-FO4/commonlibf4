#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbSequencedData.h"

namespace RE
{
	class hkbIntVariableSequencedDataSample;

	class __declspec(novtable) hkbIntVariableSequencedData :
		public hkbSequencedData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbIntVariableSequencedData };
		inline static constexpr auto VTABLE{ VTABLE::hkbIntVariableSequencedData };

		// members
		hkArray<hkbIntVariableSequencedDataSample> m_samples;  // 0x10
		std::int32_t m_variableIndex;                          // 0x20
	};
	static_assert(sizeof(hkbIntVariableSequencedData) == 0x28);
	static_assert(offsetof(hkbIntVariableSequencedData, m_samples) == 0x10);
	static_assert(offsetof(hkbIntVariableSequencedData, m_variableIndex) == 0x20);
}
