#pragma once

#include "RE/H/hknpConvexShape.h"

namespace RE
{
	class __declspec(novtable) hknpConvexPolytopeShape : public hknpConvexShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpConvexPolytopeShape };
		static constexpr auto VTABLE{ VTABLE::hknpConvexPolytopeShape };
	};
}
