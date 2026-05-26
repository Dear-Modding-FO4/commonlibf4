#pragma once

#include "RE/H/hknpShape.h"

namespace RE
{
	class __declspec(novtable) hknpConvexShape : public hknpShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpConvexShape };
		static constexpr auto VTABLE{ VTABLE::hknpConvexShape };
	};
}
