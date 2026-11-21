#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbComputeRotationFromAxisAngleModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbComputeRotationFromAxisAngleModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbComputeRotationFromAxisAngleModifierInternalState };

		// members
		hkQuaternionf m_rotationOut;  // 0x10
	};
	static_assert(sizeof(hkbComputeRotationFromAxisAngleModifierInternalState) == 0x20);
	static_assert(offsetof(hkbComputeRotationFromAxisAngleModifierInternalState, m_rotationOut) == 0x10);
}
