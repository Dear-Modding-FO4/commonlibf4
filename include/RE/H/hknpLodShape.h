#pragma once

#include "RE/H/hknpCompositeShape.h"

namespace RE
{
	class __declspec(novtable) hknpLodShape : public hknpCompositeShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpLodShape };
		static constexpr auto VTABLE{ VTABLE::hknpLodShape };
	};
}
