#pragma once

#include "RE/H/hknpShape.h"

namespace RE
{
	class __declspec(novtable) hknpDecoratorShape : public hknpShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpDecoratorShape };
		static constexpr auto VTABLE{ VTABLE::hknpDecoratorShape };
	};
}
