#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkxEnumItem;

	class __declspec(novtable) hkxEnum :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxEnum };
		inline static constexpr auto VTABLE{ VTABLE::hkxEnum };

		// members
		hkArray<hkxEnumItem> m_items;  // 0x10
	};
	static_assert(sizeof(hkxEnum) == 0x20);
	static_assert(offsetof(hkxEnum, m_items) == 0x10);
}
