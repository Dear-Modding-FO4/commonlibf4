#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkReferencedObject;
	class hkbVariableValue;

	class __declspec(novtable) hkbVariableValueSet :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbVariableValueSet };
		inline static constexpr auto VTABLE{ VTABLE::hkbVariableValueSet };

		// members
		hkArray<hkbVariableValue> m_wordVariableValues;        // 0x10
		hkArray<hkVector4f> m_quadVariableValues;              // 0x20
		hkArray<hkReferencedObject*> m_variantVariableValues;  // 0x30
	};
	static_assert(sizeof(hkbVariableValueSet) == 0x40);
	static_assert(offsetof(hkbVariableValueSet, m_wordVariableValues) == 0x10);
	static_assert(offsetof(hkbVariableValueSet, m_quadVariableValues) == 0x20);
	static_assert(offsetof(hkbVariableValueSet, m_variantVariableValues) == 0x30);
}
