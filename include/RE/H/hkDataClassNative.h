#pragma once

#include "RE/H/hkClass.h"
#include "RE/H/hkDataClassImpl.h"
#include "RE/H/hkDataWorldNative.h"

namespace RE
{
	class __declspec(novtable) hkDataClassNative :
		public hkDataClassImpl  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataClassNative };
		inline static constexpr auto VTABLE{ VTABLE::hkDataClassNative };

		// members
		const hkClass* m_class;  // 0x10
		const hkDataWorldNative* m_world;  // 0x18
	};
	static_assert(sizeof(hkDataClassNative) == 0x20);
	static_assert(offsetof(hkDataClassNative, m_class) == 0x10);
	static_assert(offsetof(hkDataClassNative, m_world) == 0x18);
}
