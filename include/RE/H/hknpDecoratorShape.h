#pragma once

#include "RE/H/hknpShape.h"

namespace RE
{
	class __declspec(novtable) hknpDecoratorShape :
		public hknpShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpDecoratorShape };
		inline static constexpr auto VTABLE{ VTABLE::hknpDecoratorShape };
	};
	static_assert(sizeof(hknpDecoratorShape) == 0x30);
}
