#pragma once

#include "RE/H/hknpModifier.h"

namespace RE
{
	class __declspec(novtable) hknpContactImpulseEventCreator :
		public hknpModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpContactImpulseEventCreator };
		inline static constexpr auto VTABLE{ VTABLE::hknpContactImpulseEventCreator };
	};
	static_assert(sizeof(hknpContactImpulseEventCreator) == 0x8);
}
