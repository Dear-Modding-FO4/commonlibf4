#pragma once

#include "RE/H/hknpModifier.h"

namespace RE
{
	class __declspec(novtable) hknpContactImpulseClippedEventCreator :
		public hknpModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpContactImpulseClippedEventCreator };
		inline static constexpr auto VTABLE{ VTABLE::hknpContactImpulseClippedEventCreator };
	};
	static_assert(sizeof(hknpContactImpulseClippedEventCreator) == 0x8);
}
