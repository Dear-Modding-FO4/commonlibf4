#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class __declspec(novtable) hkxSparselyAnimatedString :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxSparselyAnimatedString };
		inline static constexpr auto VTABLE{ VTABLE::hkxSparselyAnimatedString };

		// members
		hkArray<hkStringPtr> m_strings;  // 0x10
		hkArray<float> m_times;          // 0x20
	};
	static_assert(sizeof(hkxSparselyAnimatedString) == 0x30);
	static_assert(offsetof(hkxSparselyAnimatedString, m_strings) == 0x10);
	static_assert(offsetof(hkxSparselyAnimatedString, m_times) == 0x20);
}
