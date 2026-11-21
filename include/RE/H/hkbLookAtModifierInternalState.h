#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbLookAtModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbLookAtModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbLookAtModifierInternalState };

		// members
		hkVector4f m_lookAtLastTargetWS;  // 0x10
		float m_lookAtWeight;             // 0x20
		bool m_isTargetInsideLimitCone;   // 0x24
	};
	static_assert(sizeof(hkbLookAtModifierInternalState) == 0x30);
	static_assert(offsetof(hkbLookAtModifierInternalState, m_lookAtLastTargetWS) == 0x10);
	static_assert(offsetof(hkbLookAtModifierInternalState, m_lookAtWeight) == 0x20);
	static_assert(offsetof(hkbLookAtModifierInternalState, m_isTargetInsideLimitCone) == 0x24);
}
