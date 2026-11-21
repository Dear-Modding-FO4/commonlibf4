#pragma once

#include "RE/H/hknpModifier.h"

namespace RE
{
	class __declspec(novtable) hknpRestitutionModifier :
		public hknpModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpRestitutionModifier };
		inline static constexpr auto VTABLE{ VTABLE::hknpRestitutionModifier };
	};
	static_assert(sizeof(hknpRestitutionModifier) == 0x8);
}
