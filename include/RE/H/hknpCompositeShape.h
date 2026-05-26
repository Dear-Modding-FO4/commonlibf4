#pragma once

#include "RE/H/hknpShape.h"

namespace RE
{
	class __declspec(novtable) hknpCompositeShape : public hknpShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpCompositeShape };
		static constexpr auto VTABLE{ VTABLE::hknpCompositeShape };
	};
}
