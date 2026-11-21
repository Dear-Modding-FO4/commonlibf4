#pragma once

#include "RE/H/hknpModifier.h"

namespace RE
{
	class __declspec(novtable) hknpConstraintForceEventCreator :
		public hknpModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpConstraintForceEventCreator };
		inline static constexpr auto VTABLE{ VTABLE::hknpConstraintForceEventCreator };
	};
	static_assert(sizeof(hknpConstraintForceEventCreator) == 0x8);
}
