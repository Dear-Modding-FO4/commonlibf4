#pragma once

#include "RE/H/hknpCompositeShape.h"

namespace RE
{
	class __declspec(novtable) hknpHeightFieldShape : public hknpCompositeShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpHeightFieldShape };
		static constexpr auto VTABLE{ VTABLE::hknpHeightFieldShape };
	};
}
