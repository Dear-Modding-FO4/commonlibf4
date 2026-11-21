#pragma once

#include "RE/H/hknpModifier.h"

namespace RE
{
	class __declspec(novtable) hknpManifoldEventCreator :
		public hknpModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpManifoldEventCreator };
		inline static constexpr auto VTABLE{ VTABLE::hknpManifoldEventCreator };
	};
	static_assert(sizeof(hknpManifoldEventCreator) == 0x8);
}
