#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkxSparselyAnimatedInt :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxSparselyAnimatedInt };
		inline static constexpr auto VTABLE{ VTABLE::hkxSparselyAnimatedInt };

		// members
		hkArray<std::int32_t> m_ints;  // 0x10
		hkArray<float> m_times;        // 0x20
	};
	static_assert(sizeof(hkxSparselyAnimatedInt) == 0x30);
	static_assert(offsetof(hkxSparselyAnimatedInt, m_ints) == 0x10);
	static_assert(offsetof(hkxSparselyAnimatedInt, m_times) == 0x20);
}
