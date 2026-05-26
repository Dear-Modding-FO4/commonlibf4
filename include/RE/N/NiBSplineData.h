#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiBSplineData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSplineData };
		static constexpr auto VTABLE{ VTABLE::NiBSplineData };
	};
}
