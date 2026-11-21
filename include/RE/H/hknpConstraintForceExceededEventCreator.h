#pragma once

#include "RE/H/hknpModifier.h"

namespace RE
{
	class __declspec(novtable) hknpConstraintForceExceededEventCreator :
		public hknpModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpConstraintForceExceededEventCreator };
		inline static constexpr auto VTABLE{ VTABLE::hknpConstraintForceExceededEventCreator };
	};
	static_assert(sizeof(hknpConstraintForceExceededEventCreator) == 0x8);
}
