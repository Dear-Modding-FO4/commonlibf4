#pragma once

namespace RE
{
	class hkbEvaluateExpressionModifierInternalExpressionData
	{
	public:

		// members
		bool m_raisedEvent;             // 0x00
		bool m_wasTrueInPreviousFrame;  // 0x01
	};
	static_assert(sizeof(hkbEvaluateExpressionModifierInternalExpressionData) == 0x2);
	static_assert(offsetof(hkbEvaluateExpressionModifierInternalExpressionData, m_raisedEvent) == 0x0);
	static_assert(offsetof(hkbEvaluateExpressionModifierInternalExpressionData, m_wasTrueInPreviousFrame) == 0x1);
}
