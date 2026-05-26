#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiInterpolator : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiInterpolator };
	};
}
