#pragma once

#include "RE/H/hknpArrayAction.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hknpEaseConstraintsAction :
		public hknpArrayAction  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpEaseConstraintsAction };
		inline static constexpr auto VTABLE{ VTABLE::hknpEaseConstraintsAction };

		// members
		float m_duration;          // 0x28
		float m_timePassed;          // 0x2C
		hkArray<std::uint32_t> m_constraintIds;  // 0x30
		hkArray<float> m_originalLimits;  // 0x40
	};
	static_assert(sizeof(hknpEaseConstraintsAction) == 0x50);
	static_assert(offsetof(hknpEaseConstraintsAction, m_duration) == 0x28);
	static_assert(offsetof(hknpEaseConstraintsAction, m_timePassed) == 0x2C);
	static_assert(offsetof(hknpEaseConstraintsAction, m_constraintIds) == 0x30);
	static_assert(offsetof(hknpEaseConstraintsAction, m_originalLimits) == 0x40);
}
