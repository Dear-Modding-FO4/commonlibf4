#pragma once

#include "RE/N/NiInterpolator.h"

namespace RE
{
	class __declspec(novtable) NiLookAtInterpolator : public NiInterpolator
	{
	public:
		static constexpr auto RTTI{ RTTI::NiLookAtInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiLookAtInterpolator };
	};
}
