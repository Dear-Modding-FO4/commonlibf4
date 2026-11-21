#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbComputeDirectionModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbComputeDirectionModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbComputeDirectionModifierInternalState };

		// members
		hkVector4f m_pointOut;   // 0x10
		float m_groundAngleOut;  // 0x20
		float m_upAngleOut;      // 0x24
		bool m_computedOutput;   // 0x28
	};
	static_assert(sizeof(hkbComputeDirectionModifierInternalState) == 0x30);
	static_assert(offsetof(hkbComputeDirectionModifierInternalState, m_pointOut) == 0x10);
	static_assert(offsetof(hkbComputeDirectionModifierInternalState, m_groundAngleOut) == 0x20);
	static_assert(offsetof(hkbComputeDirectionModifierInternalState, m_upAngleOut) == 0x24);
	static_assert(offsetof(hkbComputeDirectionModifierInternalState, m_computedOutput) == 0x28);
}
