#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbDetectCloseToGroundModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbDetectCloseToGroundModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbDetectCloseToGroundModifierInternalState };

		// members
		bool m_isCloseToGround;  // 0x10
	};
	static_assert(sizeof(hkbDetectCloseToGroundModifierInternalState) == 0x18);
	static_assert(offsetof(hkbDetectCloseToGroundModifierInternalState, m_isCloseToGround) == 0x10);
}
