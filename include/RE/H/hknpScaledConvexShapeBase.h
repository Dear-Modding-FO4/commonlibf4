#pragma once

#include "RE/H/hknpDecoratorShape.h"

namespace RE
{
	class __declspec(novtable) hknpScaledConvexShapeBase : public hknpDecoratorShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpScaledConvexShapeBase };
		static constexpr auto VTABLE{ VTABLE::hknpScaledConvexShapeBase };
	};
}
