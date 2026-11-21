#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbCombineTransformsModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCombineTransformsModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbCombineTransformsModifierInternalState };

		// members
		hkVector4f m_translationOut;  // 0x10
		hkQuaternionf m_rotationOut;  // 0x20
	};
	static_assert(sizeof(hkbCombineTransformsModifierInternalState) == 0x30);
	static_assert(offsetof(hkbCombineTransformsModifierInternalState, m_translationOut) == 0x10);
	static_assert(offsetof(hkbCombineTransformsModifierInternalState, m_rotationOut) == 0x20);
}
