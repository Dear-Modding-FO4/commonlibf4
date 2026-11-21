#pragma once

#include "RE/H/hknpModifier.h"

namespace RE
{
	class __declspec(novtable) hknpSurfaceVelocityModifier :
		public hknpModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSurfaceVelocityModifier };
		inline static constexpr auto VTABLE{ VTABLE::hknpSurfaceVelocityModifier };
	};
	static_assert(sizeof(hknpSurfaceVelocityModifier) == 0x8);
}
