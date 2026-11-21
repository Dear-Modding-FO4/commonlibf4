#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkxSparselyAnimatedBool :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxSparselyAnimatedBool };
		inline static constexpr auto VTABLE{ VTABLE::hkxSparselyAnimatedBool };

		// members
		hkArray<bool> m_bools;   // 0x10
		hkArray<float> m_times;  // 0x20
	};
	static_assert(sizeof(hkxSparselyAnimatedBool) == 0x30);
	static_assert(offsetof(hkxSparselyAnimatedBool, m_bools) == 0x10);
	static_assert(offsetof(hkxSparselyAnimatedBool, m_times) == 0x20);
}
