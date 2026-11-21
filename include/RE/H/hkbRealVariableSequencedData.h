#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbSequencedData.h"

namespace RE
{
	class hkbRealVariableSequencedDataSample;

	class __declspec(novtable) hkbRealVariableSequencedData :
		public hkbSequencedData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRealVariableSequencedData };
		inline static constexpr auto VTABLE{ VTABLE::hkbRealVariableSequencedData };

		// members
		hkArray<hkbRealVariableSequencedDataSample> m_samples;  // 0x10
		std::int32_t m_variableIndex;                           // 0x20
	};
	static_assert(sizeof(hkbRealVariableSequencedData) == 0x28);
	static_assert(offsetof(hkbRealVariableSequencedData, m_samples) == 0x10);
	static_assert(offsetof(hkbRealVariableSequencedData, m_variableIndex) == 0x20);
}
