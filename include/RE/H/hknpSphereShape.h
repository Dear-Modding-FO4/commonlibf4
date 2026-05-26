#pragma once

#include "RE/H/hknpConvexShape.h"

namespace RE
{
	class __declspec(novtable) hknpSphereShape : public hknpConvexShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpSphereShape };
		static constexpr auto VTABLE{ VTABLE::hknpSphereShape };
	};
}
