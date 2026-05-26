#pragma once

#include "RE/H/hknpDecoratorShape.h"

namespace RE
{
	class __declspec(novtable) hknpMaskedShape : public hknpDecoratorShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpMaskedShape };
		static constexpr auto VTABLE{ VTABLE::hknpMaskedShape };
	};
}
