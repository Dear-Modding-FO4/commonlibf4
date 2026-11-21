#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbManualSelectorTransitionEffectInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbManualSelectorTransitionEffectInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbManualSelectorTransitionEffectInternalState };

		// members
		std::uint8_t m_currentTransitionEffectIndex;  // 0x10
	};
	static_assert(sizeof(hkbManualSelectorTransitionEffectInternalState) == 0x18);
	static_assert(offsetof(hkbManualSelectorTransitionEffectInternalState, m_currentTransitionEffectIndex) == 0x10);
}
