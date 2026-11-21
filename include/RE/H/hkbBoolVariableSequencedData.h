#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbSequencedData.h"

namespace RE
{
	class hkbBoolVariableSequencedDataSample;

	class __declspec(novtable) hkbBoolVariableSequencedData :
		public hkbSequencedData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBoolVariableSequencedData };
		inline static constexpr auto VTABLE{ VTABLE::hkbBoolVariableSequencedData };

		// members
		hkArray<hkbBoolVariableSequencedDataSample> m_samples;  // 0x10
		std::int32_t m_variableIndex;                           // 0x20
	};
	static_assert(sizeof(hkbBoolVariableSequencedData) == 0x28);
	static_assert(offsetof(hkbBoolVariableSequencedData, m_samples) == 0x10);
	static_assert(offsetof(hkbBoolVariableSequencedData, m_variableIndex) == 0x20);
}
