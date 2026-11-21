#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbTransformVectorModifierInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbTransformVectorModifierInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbTransformVectorModifierInternalState };

		// members
		hkVector4f m_vectorOut;  // 0x10
	};
	static_assert(sizeof(hkbTransformVectorModifierInternalState) == 0x20);
	static_assert(offsetof(hkbTransformVectorModifierInternalState, m_vectorOut) == 0x10);
}
