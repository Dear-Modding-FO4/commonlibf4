#pragma once

#include "RE/N/NiInterpolator.h"

namespace RE
{
	class __declspec(novtable) NiBSplineInterpolator : public NiInterpolator
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSplineInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiBSplineInterpolator };
	};
}
