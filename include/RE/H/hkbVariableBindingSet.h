#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbVariableBindingSetBinding;

	class __declspec(novtable) hkbVariableBindingSet :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbVariableBindingSet };
		inline static constexpr auto VTABLE{ VTABLE::hkbVariableBindingSet };

		// members
		hkArray<hkbVariableBindingSetBinding> m_bindings;  // 0x10
		std::int32_t m_indexOfBindingToEnable;             // 0x20
		bool m_hasOutputBinding;                           // 0x24
		bool m_initializedOffsets;                         // 0x25
	};
	static_assert(sizeof(hkbVariableBindingSet) == 0x28);
	static_assert(offsetof(hkbVariableBindingSet, m_bindings) == 0x10);
	static_assert(offsetof(hkbVariableBindingSet, m_indexOfBindingToEnable) == 0x20);
	static_assert(offsetof(hkbVariableBindingSet, m_hasOutputBinding) == 0x24);
	static_assert(offsetof(hkbVariableBindingSet, m_initializedOffsets) == 0x25);
}
