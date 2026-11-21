#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkbExpressionData
	{
	public:

		enum class ExpressionEventMode : std::uint32_t
		{
			kEventModeSendOnce = 0,
			kEventModeSendOnTrue = 1,
			kEventModeSendOnFalseToTrue = 2,
			kEventModeSendEveryFrameOnceTrue = 3
		};

		// members
		hkStringPtr m_expression;                // 0x00
		std::int32_t m_assignmentVariableIndex;  // 0x08
		std::int32_t m_assignmentEventIndex;     // 0x0C
		std::int8_t m_eventMode;                 // 0x10
		bool m_raisedEvent;                      // 0x11
		bool m_wasTrueInPreviousFrame;           // 0x12
	};
	static_assert(sizeof(hkbExpressionData) == 0x18);
	static_assert(offsetof(hkbExpressionData, m_expression) == 0x0);
	static_assert(offsetof(hkbExpressionData, m_assignmentVariableIndex) == 0x8);
	static_assert(offsetof(hkbExpressionData, m_assignmentEventIndex) == 0xC);
	static_assert(offsetof(hkbExpressionData, m_eventMode) == 0x10);
	static_assert(offsetof(hkbExpressionData, m_raisedEvent) == 0x11);
	static_assert(offsetof(hkbExpressionData, m_wasTrueInPreviousFrame) == 0x12);
}
