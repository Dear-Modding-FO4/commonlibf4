#pragma once

#include "RE/H/hkxSparselyAnimatedInt.h"

namespace RE
{
	class hkxEnum;

	class __declspec(novtable) hkxSparselyAnimatedEnum :
		public hkxSparselyAnimatedInt  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxSparselyAnimatedEnum };
		inline static constexpr auto VTABLE{ VTABLE::hkxSparselyAnimatedEnum };

		// members
		hkxEnum* m_enum;  // 0x30
	};
	static_assert(sizeof(hkxSparselyAnimatedEnum) == 0x38);
	static_assert(offsetof(hkxSparselyAnimatedEnum, m_enum) == 0x30);
}
