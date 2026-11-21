#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbJigglerModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbJigglerModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbJigglerModifierInternalState };

		// members
		hkArray<hkVector4f> m_currentVelocitiesWS;  // 0x10
		hkArray<hkVector4f> m_currentPositions;     // 0x20
		float m_timeStep;                           // 0x30
		bool m_initNextModify;                      // 0x34
	};
	static_assert(sizeof(hkbJigglerModifierInternalState) == 0x38);
	static_assert(offsetof(hkbJigglerModifierInternalState, m_currentVelocitiesWS) == 0x10);
	static_assert(offsetof(hkbJigglerModifierInternalState, m_currentPositions) == 0x20);
	static_assert(offsetof(hkbJigglerModifierInternalState, m_timeStep) == 0x30);
	static_assert(offsetof(hkbJigglerModifierInternalState, m_initNextModify) == 0x34);
}
