#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbCustomTestGeneratorNestedTypesBase.h"

namespace RE
{
	class hkbCustomTestGeneratorNestedTypesBase;

	class __declspec(novtable) hkbCustomTestGeneratorNestedTypes :
		public hkbCustomTestGeneratorNestedTypesBase  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCustomTestGeneratorNestedTypes };
		inline static constexpr auto VTABLE{ VTABLE::hkbCustomTestGeneratorNestedTypes };

		// members
		hkbCustomTestGeneratorNestedTypesBase m_nestedTypeStruct;                // 0x2C0
		hkArray<hkbCustomTestGeneratorNestedTypesBase> m_nestedTypeArrayStruct;  // 0x580
	};
	static_assert(sizeof(hkbCustomTestGeneratorNestedTypes) == 0x590);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypes, m_nestedTypeStruct) == 0x2C0);
	static_assert(offsetof(hkbCustomTestGeneratorNestedTypes, m_nestedTypeArrayStruct) == 0x580);
}
