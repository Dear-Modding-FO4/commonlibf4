#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbComputeRotationToTargetModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbComputeRotationToTargetModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbComputeRotationToTargetModifierInternalState };

		// members
		hkQuaternionf m_rotationOut;  // 0x10
	};
	static_assert(sizeof(hkbComputeRotationToTargetModifierInternalState) == 0x20);
	static_assert(offsetof(hkbComputeRotationToTargetModifierInternalState, m_rotationOut) == 0x10);
}
