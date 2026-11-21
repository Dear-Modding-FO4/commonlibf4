#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class __declspec(novtable) hkStringObject :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkStringObject };
		inline static constexpr auto VTABLE{ VTABLE::hkStringObject };

		// members
		hkStringPtr m_string;  // 0x10
	};
	static_assert(sizeof(hkStringObject) == 0x18);
	static_assert(offsetof(hkStringObject, m_string) == 0x10);
}
